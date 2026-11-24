#include <float.h>

#define CHECK_TYPE(value, type) static_assert(_Generic((value), type: 1, default: 0))
CHECK_TYPE(INFINITY, float);
CHECK_TYPE(NAN, float);
CHECK_TYPE(FLT_NORM_MAX, float);
CHECK_TYPE(DBL_NORM_MAX, double);
CHECK_TYPE(LDBL_NORM_MAX, long double);
CHECK_TYPE(FLT_SNAN, float);
CHECK_TYPE(DBL_SNAN, double);
CHECK_TYPE(LDBL_SNAN, long double);

static volatile float f_max = FLT_NORM_MAX;
static volatile double d_max = DBL_NORM_MAX;
static volatile long double l_max = LDBL_NORM_MAX;
static volatile float infinite = INFINITY;
static volatile float quiet = NAN;
static volatile float f_signal = -FLT_SNAN;
static volatile double d_signal = +DBL_SNAN;
static volatile long double l_signal = -LDBL_SNAN;

int main(void)
{
	if (f_max != FLT_MAX || d_max != DBL_MAX || l_max != LDBL_MAX)
		return 1;
	if (__builtin_isinf_sign(infinite) != 1 || !__builtin_isnan(quiet) || __builtin_issignaling(quiet))
		return 2;
	if (!__builtin_issignaling(f_signal) || !__builtin_issignaling(d_signal) || !__builtin_issignaling(l_signal))
		return 3;
	return !__builtin_signbit(f_signal) || __builtin_signbit(d_signal) || !__builtin_signbit(l_signal);
}
