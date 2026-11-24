#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>
#include <limits.h>
#include <string.h>
#include <stdint.h>

#include "stdio_impl.h"
#include "shgetc.h"
#include "floatscan.h"

#include "scanf_arguments.h"
#include "variadic.h"

static const unsigned char* build_scanset(unsigned char scanset[257], const unsigned char* format, int conversion)
{
	if (conversion == 'c' || conversion == 's')
	{
		memset(scanset, -1, 257);
		scanset[0] = 0;
		if (conversion == 's')
		{
			for (const char* space = "\t\n\v\f\r "; *space; ++space)
				scanset[1 + *space] = 0;
		}
		return format;
	}

	int invert = *++format == '^';
	format += invert;
	memset(scanset, invert, 257);
	scanset[0] = 0;
	if (*format == '-' || *format == ']')
	{
		scanset[1 + *format] = 1 - invert;
		++format;
	}
	for (; *format != ']'; ++format)
	{
		if (!*format)
			return NULL;
		if (*format == '-' && format[1] && format[1] != ']')
		{
			int first = format[-1];
			for (++format; first < *format; ++first)
				scanset[1 + first] = 1 - invert;
		}
		scanset[1 + *format] = 1 - invert;
	}
	return format;
}

int vfscanf(FILE* restrict f, const char* restrict fmt, va_list ap)
{
	int width;
	int size;
	int alloc = 0;
	int base;
	const unsigned char* p;
	int c, t;
	char* s;
	wchar_t* wcs;
	mbstate_t st;
	void* dest = NULL;
	int matches = 0;
	unsigned long long x;
	long double y;
	off_t pos = 0;
	unsigned char scanset[257];
	size_t i, k;
	wchar_t wc;

	FLOCK(f);

	if (!f->rpos)
		__toread(f);
	if (!f->rpos)
		goto input_fail;

	for (p = (const unsigned char*)fmt; *p; p++)
	{
		alloc = 0;

		if (isspace(*p))
		{
			while (isspace(p[1]))
				p++;
			shlim(f, 0);
			while (isspace(shgetc(f)))
				;
			shunget(f);
			pos += shcnt(f);
			continue;
		}
		if (*p != '%' || p[1] == '%')
		{
			shlim(f, 0);
			if (*p == '%')
			{
				p++;
				while (isspace((c = shgetc(f))))
					;
			}
			else
			{
				c = shgetc(f);
			}
			if (c != *p)
			{
				shunget(f);
				if (c < 0)
					goto input_fail;
				goto match_fail;
			}
			pos += shcnt(f);
			continue;
		}

		p++;
		if (*p == '*')
		{
			dest = 0;
			p++;
		}
		else if (isdigit(*p) && p[1] == '$')
		{
			dest = arg_n(ap, *p - '0');
			p += 2;
		}
		else
		{
			dest = va_arg(ap, void*);
		}

		for (width = 0; isdigit(*p); p++)
		{
			width = 10 * width + *p - '0';
		}

		if (*p == 'm')
		{
			wcs = 0;
			s = 0;
			alloc = !!dest;
			p++;
		}
		else
		{
			alloc = 0;
		}

		size = SIZE_def;
		switch (*p++)
		{
		case 'w':
		{
			int fast = *p == 'f';
			p += fast;
			if (*p < '1' || *p > '9')
				goto fmt_fail;
			int digits = 0;
			for (; *p >= '0' && *p <= '9'; p++)
			{
				if (digits >= 100)
					goto fmt_fail;
				digits = digits * 10 + *p - '0';
			}
			size = width_size(fast, digits);
			if (size == SIZE_invalid || !integer_conversion(*p) || *p == 'B')
				goto fmt_fail;
			break;
		}
		case 'h':
			if (*p == 'h')
				p++, size = SIZE_hh;
			else
				size = SIZE_h;
			break;
		case 'l':
			if (*p == 'l')
				p++, size = SIZE_ll;
			else
				size = SIZE_l;
			break;
		case 'j':
			size = SIZE_ll;
			break;
		case 'z':
		case 't':
			size = SIZE_l;
			break;
		case 'L':
			size = SIZE_L;
			break;
		case 'b':
		case 'd':
		case 'i':
		case 'o':
		case 'u':
		case 'x':
		case 'a':
		case 'e':
		case 'f':
		case 'g':
		case 'A':
		case 'E':
		case 'F':
		case 'G':
		case 'X':
		case 's':
		case 'c':
		case '[':
		case 'S':
		case 'C':
		case 'p':
		case 'n':
			p--;
			break;
		default:
			goto fmt_fail;
		}

		t = *p;

		/* C or S */
		if ((t & 0x2f) == 3)
		{
			t |= 32;
			size = SIZE_l;
		}

		switch (t)
		{
		case 'c':
			if (width < 1)
				width = 1;
		case '[':
			break;
		case 'n':
			store_int(dest, size, pos);
			/* do not increment match count, etc! */
			continue;
		default:
			shlim(f, 0);
			while (isspace(shgetc(f)))
				;
			shunget(f);
			pos += shcnt(f);
		}

		shlim(f, width);
		if (shgetc(f) < 0)
			goto input_fail;
		shunget(f);

		switch (t)
		{
		case 's':
		case 'c':
		case '[':
			p = build_scanset(scanset, p, t);
			if (!p)
				goto fmt_fail;
			wcs = 0;
			s = 0;
			i = 0;
			k = t == 'c' ? width + 1U : 31;
			if (size == SIZE_l)
			{
				if (alloc)
				{
					wcs = malloc(k * sizeof(wchar_t));
					if (!wcs)
						goto alloc_fail;
				}
				else
				{
					wcs = dest;
				}
				st = (mbstate_t){ 0 };
				while (scanset[(c = shgetc(f)) + 1])
				{
					switch (mbrtowc(&wc, &(char){ c }, 1, &st))
					{
					case -1:
						goto input_fail;
					case -2:
						continue;
					}
					if (wcs)
						wcs[i++] = wc;
					if (alloc && i == k)
					{
						k += k + 1;
						wchar_t* tmp = realloc(wcs, k * sizeof(wchar_t));
						if (!tmp)
							goto alloc_fail;
						wcs = tmp;
					}
				}
				if (!mbsinit(&st))
					goto input_fail;
			}
			else if (alloc)
			{
				s = malloc(k);
				if (!s)
					goto alloc_fail;
				while (scanset[(c = shgetc(f)) + 1])
				{
					s[i++] = c;
					if (i == k)
					{
						k += k + 1;
						char* tmp = realloc(s, k);
						if (!tmp)
							goto alloc_fail;
						s = tmp;
					}
				}
			}
			else if ((s = dest))
			{
				while (scanset[(c = shgetc(f)) + 1])
					s[i++] = c;
			}
			else
			{
				while (scanset[(c = shgetc(f)) + 1])
					;
			}
			shunget(f);
			if (!shcnt(f))
				goto match_fail;
			if (t == 'c' && shcnt(f) != width)
				goto match_fail;
			if (alloc)
			{
				if (size == SIZE_l)
					*(wchar_t**)dest = wcs;
				else
					*(char**)dest = s;
			}
			if (t != 'c')
			{
				if (wcs)
					wcs[i] = 0;
				if (s)
					s[i] = 0;
			}
			break;
		case 'p':
		case 'X':
		case 'x':
			base = 16;
			goto int_common;
		case 'b':
			base = 2;
			goto int_common;
		case 'o':
			base = 8;
			goto int_common;
		case 'd':
		case 'u':
			base = 10;
			goto int_common;
		case 'i':
			base = 0;
		int_common:
			x = __cppgm_c23_scan_integer(f, base);
			if (!shcnt(f))
				goto match_fail;
			if (t == 'p' && dest)
				*(void**)dest = (void*)(uintptr_t)x;
			else
				store_int(dest, size, x);
			break;
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'f':
		case 'F':
		case 'g':
		case 'G':
			y = __floatscan(f, size, 0);
			if (!shcnt(f))
				goto match_fail;
			if (dest)
				switch (size)
				{
				case SIZE_def:
					*(float*)dest = y;
					break;
				case SIZE_l:
					*(double*)dest = y;
					break;
				case SIZE_L:
					*(long double*)dest = y;
					break;
				}
			break;
		}

		pos += shcnt(f);
		if (dest)
			matches++;
	}
	if (0)
	{
	fmt_fail:
	alloc_fail:
	input_fail:
		if (!matches)
			matches--;
	match_fail:
		if (alloc)
		{
			free(s);
			free(wcs);
		}
	}
	FUNLOCK(f);
	return matches;
}

VARIADIC(fscanf, (FILE* restrict file, const char* restrict format, ...), vfscanf(file, format, arguments))
