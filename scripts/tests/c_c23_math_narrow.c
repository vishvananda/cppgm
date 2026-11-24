#include <fenv.h>
#include <float.h>
#include <math.h>

static int double_to_float(void)
{
	volatile double middle = 0x1.000001p0;
	volatile double low = 0x1p-56;
	volatile double offset = 0x1p-31;
	const float next = 0x1.000002p0f;
	if (fadd(middle, low) != next || fsub(middle, -low) != next || fsub(middle, low) != 1.0f)
		return 1;
	if (fmul(1.0 + offset, middle - offset) != next || fdiv(middle - offset, 1.0 - offset) != next)
		return 2;
	if (ffma(middle, 1.0, low) != next || ffma(1.0 + offset, 1.0 - offset, -1.0) != -0x1p-62f)
		return 3;
	if (fsqrt(nextafter(middle * middle, INFINITY)) != next || fsqrt(middle * middle) != 1.0f)
		return 4;
	volatile double tiny = 0x1p-150;
	volatile double tinier = 0x1p-205;
	volatile double overflow = 0x1.ffffffp127;
	if (fadd(tiny, tinier) != FLT_TRUE_MIN || fadd(tiny, -tinier) != 0.0f || fsub(overflow, 0x1p70) != FLT_MAX ||
		fadd(overflow, 0x1p70) != INFINITY)
		return 5;
	return 0;
}

static int long_double_to_float(void)
{
	volatile long double a = 4.0L;
	volatile long double b = 2.0L;
	if (faddl(a, b) != 6.0f || fsubl(a, b) != 2.0f || fmull(a, b) != 8.0f || fdivl(a, b) != 2.0f ||
		ffmal(a, b, -b) != 6.0f || fsqrtl(a) != 2.0f)
		return 6;
	volatile long double middle = 0x1.000001p0L;
	volatile long double low = 0x1p-120L;
	if (faddl(middle, low) != 0x1.000002p0f || fsubl(middle, low) != 1.0f)
		return 7;
	return 0;
}

static int long_double_to_double(void)
{
	volatile long double a = 4.0L;
	volatile long double b = 2.0L;
	if (daddl(a, b) != 6.0 || dsubl(a, b) != 2.0 || dmull(a, b) != 8.0 || ddivl(a, b) != 2.0 ||
		dfmal(a, b, -b) != 6.0 || dsqrtl(a) != 2.0)
		return 8;
#if LDBL_MANT_DIG == 113
	volatile long double middle = 0x1.00000000000008p0L;
	volatile long double low = 0x1p-115L;
	volatile long double offset = 0x1p-70L;
	const double next = 0x1.0000000000001p0;
	if (daddl(middle, low) != next || dsubl(middle, low) != 1.0)
		return 9;
	if (dmull(1.0L + offset, middle - offset) != next || ddivl(middle - offset, 1.0L - offset) != next)
		return 10;
	if (dfmal(1.0L + offset, 1.0L - offset, -1.0L) != -0x1p-140 ||
		dsqrtl(nextafterl(middle * middle, INFINITY)) != next)
		return 11;
	volatile long double tiny = 0x1p-1075L;
	volatile long double tinier = 0x1p-1190L;
	if (daddl(tiny, tinier) != DBL_TRUE_MIN || dsubl(tiny, tinier) != 0.0)
		return 12;
#endif
	return 0;
}

int main(void)
{
	int result = double_to_float();
	if (result != 0)
		return result;
	result = long_double_to_float();
	if (result != 0)
		return result;
	result = long_double_to_double();
	if (result != 0)
		return result;
	volatile double zero = -0.0;
	volatile double infinity = INFINITY;
	if (!signbit(fsqrt(zero)) || !signbit(ddivl(-1.0L, infinity)) || !isinf(fdiv(-1.0, zero)) ||
		!isnan(fmul(zero, infinity)) || !isnan(dsubl(infinity, infinity)) || !isnan(ffmal(infinity, zero, 1.0L)))
		return 13;
#ifdef FE_UPWARD
	const int previous_rounding = fegetround();
	volatile double one = 1.0;
	volatile double increment = 0x1p-56;
	if (fesetround(FE_UPWARD) != 0)
		return 14;
	const float upward = fadd(one, increment);
	if (fesetround(previous_rounding) != 0 || upward != 0x1.000002p0f)
		return 15;
#endif
	return 0;
}
