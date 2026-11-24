#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include "shgetc.h"

/* Lookup table for digit values. -1==255>=36 -> invalid */
static const unsigned char table[] = {
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};

unsigned long long __cppgm_c23_scan_integer(FILE* f, unsigned base)
{
	const unsigned char* val = table + 1;
	int c, neg = 0;
	unsigned x;
	unsigned long long y;
	while (isspace((c = shgetc(f))))
		;
	if (c == '+' || c == '-')
	{
		neg = -(c == '-');
		c = shgetc(f);
	}
	if ((base == 0 || base == 2 || base == 16) && c == '0')
	{
		c = shgetc(f);
		unsigned prefix_base = 0;
		if (base != 2 && (c | 32) == 'x')
			prefix_base = 16;
		if (base != 16 && (c | 32) == 'b')
			prefix_base = 2;
		if (prefix_base)
		{
			base = prefix_base;
			c = shgetc(f);
			if (val[c] >= base)
			{
				shunget(f);
				shlim(f, 0);
				return 0;
			}
		}
		else if (base == 0)
		{
			base = 8;
		}
	}
	else
	{
		if (base == 0)
			base = 10;
		if (val[c] >= base)
		{
			shunget(f);
			shlim(f, 0);
			errno = EINVAL;
			return 0;
		}
	}
	if (base == 10)
	{
		for (x = 0; c - '0' < 10U && x <= UINT_MAX / 10 - 1; c = shgetc(f))
			x = x * 10 + (c - '0');
		for (y = x; c - '0' < 10U && y <= ULLONG_MAX / 10 && 10 * y <= ULLONG_MAX - (c - '0'); c = shgetc(f))
			y = y * 10 + (c - '0');
		if (c - '0' >= 10U)
			goto done;
	}
	else
	{
		int bs = base == 16 ? 4 : base == 8 ? 3 : 1;
		for (x = 0; val[c] < base && x <= UINT_MAX / 32; c = shgetc(f))
			x = x << bs | val[c];
		for (y = x; val[c] < base && y <= ULLONG_MAX >> bs; c = shgetc(f))
			y = y << bs | val[c];
	}
	if (val[c] < base)
	{
		for (; val[c] < base; c = shgetc(f))
			;
		errno = ERANGE;
		y = ULLONG_MAX;
		neg = 0;
	}
done:
	shunget(f);
	return (y ^ neg) - neg;
}
