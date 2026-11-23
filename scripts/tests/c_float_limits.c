#include <float.h>

#if !defined(FLT_EVAL_METHOD) || FLT_EVAL_METHOD != 0
#error incorrect evaluation method
#endif
#if FLT_RADIX != 2 || FLT_MANT_DIG != 24 || FLT_DIG != 6 || FLT_MIN_EXP != -125 || FLT_MAX_EXP != 128 || \
	FLT_MIN_10_EXP != -37 || FLT_MAX_10_EXP != 38
#error incorrect binary32 parameters
#endif
#if DBL_MANT_DIG != 53 || DBL_DIG != 15 || DBL_MIN_EXP != -1021 || DBL_MAX_EXP != 1024 || DBL_MIN_10_EXP != -307 || \
	DBL_MAX_10_EXP != 308
#error incorrect binary64 parameters
#endif
#if !defined(EXPECT_LDBL_MANT_DIG) || LDBL_MANT_DIG != EXPECT_LDBL_MANT_DIG
#error incorrect target long double precision
#endif

#if LDBL_MANT_DIG == 64
#define LD_MAX 0x1.fffffffffffffffep+16383L
#define LD_MIN 0x1p-16382L
#define LD_EPSILON 0x1p-63L
#define LD_DIG 18
#define LD_DECIMAL_DIG 21
#define LD_TRUE_MIN 0x1p-16445L
#elif LDBL_MANT_DIG == 113
#define LD_MAX 0x1.ffffffffffffffffffffffffffffp+16383L
#define LD_MIN 0x1p-16382L
#define LD_EPSILON 0x1p-112L
#define LD_DIG 33
#define LD_DECIMAL_DIG 36
#define LD_TRUE_MIN 0x1p-16494L
#elif LDBL_MANT_DIG == 53
#define LD_MAX 0x1.fffffffffffffp+1023L
#define LD_MIN 0x1p-1022L
#define LD_EPSILON 0x1p-52L
#define LD_DIG 15
#define LD_DECIMAL_DIG 17
#define LD_TRUE_MIN 0x1p-1074L
#else
#error unexpected target long double format
#endif
#if LDBL_MANT_DIG == 53
#if LDBL_MIN_EXP != -1021 || LDBL_MAX_EXP != 1024 || LDBL_MIN_10_EXP != -307 || LDBL_MAX_10_EXP != 308
#error incorrect binary64 long double exponent range
#endif
#else
#if LDBL_MIN_EXP != -16381 || LDBL_MAX_EXP != 16384 || LDBL_MIN_10_EXP != -4931 || LDBL_MAX_10_EXP != 4932
#error incorrect extended long double exponent range
#endif
#endif
#if LDBL_DIG != LD_DIG || DECIMAL_DIG < LD_DECIMAL_DIG
#error incorrect long double decimal precision
#endif

static volatile float f_limits[] = { FLT_MAX, FLT_MIN, FLT_EPSILON };
static volatile double d_limits[] = { DBL_MAX, DBL_MIN, DBL_EPSILON };
static volatile long double l_limits[] = { LDBL_MAX, LDBL_MIN, LDBL_EPSILON };
#if __STDC_VERSION__ >= 201112L
#if FLT_DECIMAL_DIG != 9 || DBL_DECIMAL_DIG != 17 || LDBL_DECIMAL_DIG != LD_DECIMAL_DIG
#error incorrect per-type round-trip precision
#endif
#if FLT_HAS_SUBNORM != 1 || DBL_HAS_SUBNORM != 1 || LDBL_HAS_SUBNORM != 1
#error incorrect subnormal support
#endif
static volatile float f_true_min = FLT_TRUE_MIN;
static volatile double d_true_min = DBL_TRUE_MIN;
static volatile long double l_true_min = LDBL_TRUE_MIN;
#endif
int main(void)
{
	if (f_limits[0] != 0x1.fffffep+127F || f_limits[1] != 0x1p-126F || f_limits[2] != 0x1p-23F)
		return 1;
	if (d_limits[0] != 0x1.fffffffffffffp+1023 || d_limits[1] != 0x1p-1022 || d_limits[2] != 0x1p-52)
		return 2;
	if (l_limits[0] != LD_MAX || l_limits[1] != LD_MIN || l_limits[2] != LD_EPSILON)
		return 3;
#if __STDC_VERSION__ >= 201112L
	if (f_true_min != 0x1p-149F || d_true_min != 0x1p-1074 || l_true_min != LD_TRUE_MIN)
		return 4;
#endif
	return 0;
}
