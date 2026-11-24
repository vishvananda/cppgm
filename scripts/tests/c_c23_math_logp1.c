#include <float.h>
#include <math.h>

int main(void)
{
	volatile double small = 0x1p-40;
	volatile float smallf = 0x1p-20f;
	volatile long double zero = -0.0L;
	volatile long double minus_one = -1.0L;
	const double result = logp1(small);
	const float resultf = logp1f(smallf);
	if (!(result < small && result > small * 0.99) || !(resultf < smallf && resultf > smallf * 0.99f))
		return 1;
	if (!signbit(logp1l(zero)) || logp1l(minus_one) != -INFINITY || !isnan(logp1l(minus_one - 1.0L)))
		return 2;
#if LDBL_MAX_EXP >= 4096
	volatile long double tiny = 0x1p-2000L;
	if (logp1l(tiny) != tiny || log1pl(tiny) != tiny)
		return 3;
#endif
#if LDBL_MANT_DIG == 113
	volatile long double wide = -0x1.0000000000000001p-80L;
	const long double correction = logp1l(wide) - wide;
	if (!(correction > -0x1p-160L && correction < -0x1p-162L))
		return 4;
#endif
	return 0;
}
