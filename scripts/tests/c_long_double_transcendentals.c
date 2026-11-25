#include <float.h>
#include <math.h>

int main(void)
{
#if LDBL_MAX_EXP >= 4096
	volatile long double small = 0x1p-2000L;
	volatile long double large = 1000.0L;
	const long double exponent = -2000.0L;
	const long double lower_bound = 0x1p1024L;
#else
	volatile long double small = 0x1p-500L;
	volatile long double large = 500.0L;
	const long double exponent = -500.0L;
	const long double lower_bound = 0x1p512L;
#endif
	const long double ln2 = 0x1.62e42fefa39ef35793c7673007e6p-1L;
	const long double log10_2 = 0x1.34413509f79fef311f12b35816f9p-2L;
	if (!(fabsl(logl(small) - exponent * ln2) <= -exponent * LDBL_EPSILON) ||
		!(fabsl(log10l(small) - exponent * log10_2) <= -exponent * LDBL_EPSILON) || log2l(small) != exponent)
		return 1;
	const long double exponential = expl(large);
	if (!(isfinite(exponential) && exponential > lower_bound && expl(-large) > 0))
		return 2;

	volatile long double one = 1.0L;
	volatile long double near_one = one + scalbnl(one, 2 - LDBL_MANT_DIG);
	volatile long double power = scalbnl(one, LDBL_MANT_DIG - 2);
	const long double e = 0x1.5bf0a8b1457695355fb8ac404e7ap+1L;
#if defined(__APPLE__) && LDBL_MANT_DIG == 64
	/* Apple Clang with Intel libSystem gives about 6.3e-10 error here. */
	const long double tolerance = 0x1p-29L;
#else
	const long double tolerance = 8 * LDBL_EPSILON;
#endif
	if (!(fabsl(powl(near_one, power) - e) <= tolerance))
		return 3;

	volatile long double odd = 2 * power + 1;
	volatile long double zero = -0.0L;
	volatile long double minus_one = -1.0L;
	if (powl(minus_one, odd) != minus_one || powl(minus_one, 2 * power) != one || !signbit(powl(zero, 3)) ||
		signbit(powl(zero, 2)) || powl(zero, -3) != -INFINITY || !isnan(powl(minus_one, 0.5L)) ||
		powl(minus_one, INFINITY) != one)
		return 4;
	return 0;
}
