#include <limits.h>

#if CHAR_BIT != 8 || MB_LEN_MAX < 1 || SCHAR_MIN != -128 || SCHAR_MAX != 127 || UCHAR_MAX != 255
#error incorrect byte limits
#endif
#if SHRT_MIN != -32768 || SHRT_MAX != 32767 || USHRT_MAX != 65535
#error incorrect short limits
#endif
#if INT_MIN != (-2147483647 - 1) || INT_MAX != 2147483647 || UINT_MAX != 4294967295U
#error incorrect int limits
#endif
#if EXPECT_LONG_BITS == 32
#if LONG_MIN != (-2147483647L - 1) || LONG_MAX != 2147483647L || ULONG_MAX != 4294967295UL
#error incorrect 32-bit long limits
#endif
#elif EXPECT_LONG_BITS == 64
#if LONG_MIN != (-9223372036854775807L - 1) || LONG_MAX != 9223372036854775807L || ULONG_MAX != 18446744073709551615UL
#error incorrect 64-bit long limits
#endif
#else
#error missing target long size
#endif
#if LLONG_MIN != (-9223372036854775807LL - 1) || LLONG_MAX != 9223372036854775807LL || \
	ULLONG_MAX != 18446744073709551615ULL
#error incorrect long long limits
#endif
#if !defined(CHAR_MIN) || !defined(CHAR_MAX)
#error missing plain char range
#endif

#if __STDC_VERSION__ >= 201112L
#define CHECK_TYPE(name, type) _Static_assert(_Generic((name), type: 1, default: 0), #name)
CHECK_TYPE(CHAR_MIN, int);
CHECK_TYPE(CHAR_MAX, int);
CHECK_TYPE(SCHAR_MIN, int);
CHECK_TYPE(SCHAR_MAX, int);
CHECK_TYPE(UCHAR_MAX, int);
CHECK_TYPE(SHRT_MIN, int);
CHECK_TYPE(SHRT_MAX, int);
CHECK_TYPE(USHRT_MAX, int);
CHECK_TYPE(INT_MIN, int);
CHECK_TYPE(INT_MAX, int);
CHECK_TYPE(UINT_MAX, unsigned int);
CHECK_TYPE(LONG_MIN, long);
CHECK_TYPE(LONG_MAX, long);
CHECK_TYPE(ULONG_MAX, unsigned long);
CHECK_TYPE(LLONG_MIN, long long);
CHECK_TYPE(LLONG_MAX, long long);
CHECK_TYPE(ULLONG_MAX, unsigned long long);
#endif

int main(void)
{
	volatile char negative_one = (char)-1;
	if (negative_one < 0)
		return CHAR_MIN != SCHAR_MIN || CHAR_MAX != SCHAR_MAX;
	return CHAR_MIN != 0 || CHAR_MAX != UCHAR_MAX;
}
