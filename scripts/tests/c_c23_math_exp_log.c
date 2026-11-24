#include <float.h>
#include <math.h>

int main(void)
{
	volatile double zero = -0.0;
	volatile double two = 2.0;
	volatile double seven = 7.0;
	volatile double ninety_nine = 99.0;
	volatile double minimum = 0x1p-1074;
	volatile float zerof = -0.0f;
	volatile float twof = 2.0f;
	volatile float sevenf = 7.0f;
	volatile float ninety_ninef = 99.0f;
	volatile float minimumf = 0x1p-148f;

	if (exp10m1(two) != 99.0 || exp2m1(two + 1) != 7.0 || log10p1(ninety_nine) != 2.0 || exp10m1f(twof) != 99.0f ||
		exp2m1f(twof + 1) != 7.0f || log10p1f(ninety_ninef) != 2.0f || !(fabs(log2p1(seven) - 3.0) <= 0x1p-51) ||
		!(fabsf(log2p1f(sevenf) - 3.0f) <= 0x1p-22f))
		return 1;
	if (!signbit(exp10m1(zero)) || !signbit(exp2m1(zero)) || !signbit(log10p1(zero)) || !signbit(log2p1(zero)) ||
		!signbit(exp10m1f(zerof)) || !signbit(exp2m1f(zerof)) || !signbit(log10p1f(zerof)) || !signbit(log2p1f(zerof)))
		return 2;
	if (!isnan(log10p1(-two)) || !isnan(log2p1f(-twof)) || rsqrt(two + two) != 0.5 || rsqrtf(twof + twof) != 0.5f)
		return 3;
	if (rsqrt(minimum) != 0x1p537 || rsqrtf(minimumf) != 0x1p74f || rsqrt(zero) != -INFINITY ||
		rsqrtf(zerof) != -INFINITY || !isnan(rsqrt(-two)) || !isnan(rsqrtf(-twof)))
		return 4;
	volatile long double sevenl = 7.0L;
	volatile long double ninety_ninel = 99.0L;
	volatile long double zerol = -0.0L;
	if (!(fabsl(log2p1l(sevenl) - 3.0L) <= 4 * LDBL_EPSILON) ||
		!(fabsl(log10p1l(ninety_ninel) - 2.0L) <= 4 * LDBL_EPSILON) || !signbit(log2p1l(zerol)) ||
		!signbit(log10p1l(zerol)))
		return 5;
#if LDBL_MAX_EXP >= 4096
	volatile long double tiny = 0x1p-2000L;
	const long double base_two = log2p1l(tiny);
	const long double base_ten = log10p1l(tiny);
	if (!(base_two > tiny && base_two < 2 * tiny && base_ten > tiny / 4 && base_ten < tiny / 2))
		return 6;
#endif
	return 0;
}
