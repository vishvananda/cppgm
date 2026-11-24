#include <limits.h>

#if BOOL_WIDTH != 1 || CHAR_WIDTH != CHAR_BIT || SCHAR_WIDTH != CHAR_BIT || UCHAR_WIDTH != CHAR_BIT
#error incorrect widths for bool and character types
#endif
#if SHRT_WIDTH != USHRT_WIDTH || INT_WIDTH != UINT_WIDTH || LONG_WIDTH != ULONG_WIDTH || LLONG_WIDTH != ULLONG_WIDTH
#error signed and unsigned widths disagree
#endif
#if SHRT_WIDTH < 16 || INT_WIDTH < 16 || LONG_WIDTH < 32 || LLONG_WIDTH < 64 || BITINT_MAXWIDTH < ULLONG_WIDTH
#error width macro below its minimum
#endif

static_assert(SHRT_WIDTH == sizeof(short) * CHAR_BIT);
static_assert(INT_WIDTH == sizeof(int) * CHAR_BIT);
static_assert(LONG_WIDTH == sizeof(long) * CHAR_BIT);
static_assert(LLONG_WIDTH == sizeof(long long) * CHAR_BIT);

typedef unsigned _BitInt(BITINT_MAXWIDTH) widest;
static volatile widest most_significant_bit = (widest)1 << (BITINT_MAXWIDTH - 1);

int main(void)
{
	return (most_significant_bit >> (BITINT_MAXWIDTH - 1)) != 1;
}
