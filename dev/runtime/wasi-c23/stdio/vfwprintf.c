#include "stdio_impl.h"
#include <errno.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>
#include <inttypes.h>

#include "printf_arguments.h"
#include "variadic.h"

static void out(FILE* f, const wchar_t* s, size_t l)
{
	while (l-- && !ferror(f))
		fputwc(*s++, f);
}

static void pad(FILE* f, int n, int fl)
{
	if ((fl & LEFT_ADJ) || !n || ferror(f))
		return;
	fprintf(f, "%*s", n, "");
}

static int getint(wchar_t** s)
{
	int i;
	for (i = 0; iswdigit(**s); (*s)++)
	{
		if (i > INT_MAX / 10U || **s - '0' > INT_MAX - 10 * i)
			i = -1;
		else
			i = 10 * i + (**s - '0');
	}
	return i;
}

static int wprintf_core(FILE* f, const wchar_t* fmt, va_list* ap, union arg* nl_arg, int* nl_type)
{
	wchar_t *a, *z, *s = (wchar_t*)fmt;
	unsigned l10n = 0, fl;
	int w, p, xp;
	union arg arg;
	int argpos;
	unsigned st, ps;
	int cnt = 0, l = 0;
	int i;
	int t;
	char* bs;
	char charfmt[16];
	wchar_t wc;

	for (;;)
	{
		/* This error is only specified for snprintf, but since it's
		 * unspecified for other forms, do the same. Stop immediately
		 * on overflow; otherwise %n could produce wrong results. */
		if (l > INT_MAX - cnt)
			goto overflow;

		/* Update output count, end loop when fmt is exhausted */
		cnt += l;
		if (!*s)
			break;

		/* Handle literal text and %% format specifiers */
		for (a = s; *s && *s != '%'; s++)
			;
		for (z = s; s[0] == '%' && s[1] == '%'; z++, s += 2)
			;
		if (z - a > INT_MAX - cnt)
			goto overflow;
		l = z - a;
		if (f)
			out(f, a, l);
		if (l)
			continue;

		if (iswdigit(s[1]) && s[2] == '$')
		{
			l10n = 1;
			argpos = s[1] - '0';
			s += 3;
		}
		else
		{
			argpos = -1;
			s++;
		}

		/* Read modifier flags */
		for (fl = 0; (unsigned)*s - ' ' < 32 && (FLAGMASK & (1U << *s - ' ')); s++)
			fl |= 1U << *s - ' ';

		/* Read field width */
		if (*s == '*')
		{
			if (iswdigit(s[1]) && s[2] == '$')
			{
				l10n = 1;
				if (!f)
					nl_type[s[1] - '0'] = INT, w = 0;
				else
					w = nl_arg[s[1] - '0'].i;
				s += 3;
			}
			else if (!l10n)
			{
				w = f ? va_arg(*ap, int) : 0;
				s++;
			}
			else
				goto inval;
			if (w == INT_MIN)
				goto overflow;
			if (w < 0)
				fl |= LEFT_ADJ, w = -w;
		}
		else if ((w = getint(&s)) < 0)
			goto overflow;

		/* Read precision */
		if (*s == '.' && s[1] == '*')
		{
			if (isdigit(s[2]) && s[3] == '$')
			{
				if (!f)
					nl_type[s[2] - '0'] = INT, p = 0;
				else
					p = nl_arg[s[2] - '0'].i;
				s += 4;
			}
			else if (!l10n)
			{
				p = f ? va_arg(*ap, int) : 0;
				s += 2;
			}
			else
				goto inval;
			xp = (p >= 0);
		}
		else if (*s == '.')
		{
			s++;
			p = getint(&s);
			xp = 1;
		}
		else
		{
			p = -1;
			xp = 0;
		}

		/* Format specifier state machine */
		st = 0;
		if (*s == 'w')
		{
			int fast = *++s == 'f';
			s += fast;
			if (*s < '1' || *s > '9')
				goto inval;
			ps = width_prefix(fast, getint(&s));
			if (ps == STOP || !integer_conversion(*s))
				goto inval;
			st = states[ps] S(*s++);
		}
		else
			do
			{
				if (OOB(*s))
					goto inval;
				ps = st;
				st = states[st] S(*s++);
			} while (st - 1 < STOP);
		if (!st)
			goto inval;

		/* Check validity of argument type (nl/normal) */
		if (st == NOARG)
		{
			if (argpos >= 0)
				goto inval;
		}
		else
		{
			if (argpos >= 0)
				nl_type[argpos] = st, arg = nl_arg[argpos];
			else if (f)
				pop_arg(&arg, st, ap);
			else
				return 0;
		}

		if (!f)
			continue;

		/* Do not process any new directives once in error state. */
		if (ferror(f))
			return -1;

		t = s[-1];
		if (ps && (t & 15) == 3)
			t &= ~32;

		switch (t)
		{
		case 'n':
			store_count(arg.p, ps, cnt);
			continue;
		case 'c':
		case 'C':
			if (w < 1)
				w = 1;
			pad(f, w - 1, fl);
			out(f, &(wchar_t){ t == 'C' ? arg.i : btowc(arg.i) }, 1);
			pad(f, w - 1, fl ^ LEFT_ADJ);
			l = w;
			continue;
		case 'S':
			a = arg.p;
			z = a + wcsnlen(a, p < 0 ? INT_MAX : p);
			if (p < 0 && *z)
				goto overflow;
			p = z - a;
			if (w < p)
				w = p;
			pad(f, w - p, fl);
			out(f, a, p);
			pad(f, w - p, fl ^ LEFT_ADJ);
			l = w;
			continue;
		case 'm':
			arg.p = strerror(errno);
		case 's':
			if (!arg.p)
				arg.p = "(null)";
			bs = arg.p;
			for (i = l = 0; l < (p < 0 ? INT_MAX : p) && (i = mbtowc(&wc, bs, MB_LEN_MAX)) > 0; bs += i, l++)
				;
			if (i < 0)
				return -1;
			if (p < 0 && *bs)
				goto overflow;
			p = l;
			if (w < p)
				w = p;
			pad(f, w - p, fl);
			bs = arg.p;
			while (l--)
			{
				i = mbtowc(&wc, bs, MB_LEN_MAX);
				bs += i;
				out(f, &wc, 1);
			}
			pad(f, w - p, fl ^ LEFT_ADJ);
			l = w;
			continue;
		}

		if (xp && p < 0)
			goto overflow;
		int floating = (t | 32) == 'a' || (t | 32) == 'e' || (t | 32) == 'f' || (t | 32) == 'g';
		char length = floating ? 'L' : t == 'p' ? 0 : 'j';
		char* narrow = charfmt;
		*narrow++ = '%';
		if (fl & ALT_FORM)
			*narrow++ = '#';
		if (fl & MARK_POS)
			*narrow++ = '+';
		if (fl & LEFT_ADJ)
			*narrow++ = '-';
		if (fl & PAD_POS)
			*narrow++ = ' ';
		if (fl & ZERO_PAD)
			*narrow++ = '0';
		*narrow++ = '*';
		*narrow++ = '.';
		*narrow++ = '*';
		if (length)
			*narrow++ = length;
		*narrow++ = t;
		*narrow = 0;

		if (floating)
			l = fprintf(f, charfmt, w, p, arg.f);
		else if (t == 'p')
			l = fprintf(f, charfmt, w, p, (void*)(uintptr_t)arg.i);
		else if (t == 'd' || t == 'i')
			l = fprintf(f, charfmt, w, p, (intmax_t)arg.i);
		else
			l = fprintf(f, charfmt, w, p, arg.i);
		if (l < 0)
			return -1;
	}

	if (f)
		return cnt;
	if (!l10n)
		return 0;

	for (i = 1; i <= NL_ARGMAX && nl_type[i]; i++)
		pop_arg(nl_arg + i, nl_type[i], ap);
	for (; i <= NL_ARGMAX && !nl_type[i]; i++)
		;
	if (i <= NL_ARGMAX)
		return -1;
	return 1;

inval:
	errno = EINVAL;
	return -1;
overflow:
	errno = EOVERFLOW;
	return -1;
}

int vfwprintf(FILE* restrict f, const wchar_t* restrict fmt, va_list ap)
{
	va_list ap2;
	int nl_type[NL_ARGMAX + 1] = { 0 };
	union arg nl_arg[NL_ARGMAX + 1];
	int olderr;
	int ret;

	/* the copy allows passing va_list* even if va_list is an array */
	va_copy(ap2, ap);
	if (wprintf_core(0, fmt, &ap2, nl_arg, nl_type) < 0)
	{
		va_end(ap2);
		return -1;
	}

	FLOCK(f);
	fwide(f, 1);
	olderr = f->flags & F_ERR;
	f->flags &= ~F_ERR;
	ret = wprintf_core(f, fmt, &ap2, nl_arg, nl_type);
	if (ferror(f))
		ret = -1;
	f->flags |= olderr;
	FUNLOCK(f);
	va_end(ap2);
	return ret;
}

VARIADIC(fwprintf, (FILE* restrict file, const wchar_t* restrict format, ...), vfwprintf(file, format, arguments))
