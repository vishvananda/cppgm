#include <float.h>
#include <math.h>

int main(void)
{
	volatile long double four = 4.0L;
	volatile long double zero = -0.0L;
	volatile long double infinity = INFINITY;
	if (rsqrtl(four) != 0.5L || rsqrtl(zero) != -INFINITY || !isnan(rsqrtl(-four)))
		return 1;
	long double result = rsqrtl(infinity);
	if (result != 0.0L || signbit(result))
		return 2;
#if LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384
	volatile long double subnormal = LDBL_TRUE_MIN;
	volatile long double above_one = 0x1.0000000000000001p+0L;
	if (rsqrtl(subnormal) != 0x1p8247L)
		return 3;
	result = rsqrtl(above_one);
	if (!(result < 1.0L && result > 0x1.fffffffffffffffep-1L))
		return 4;
#endif
	return 0;
}
