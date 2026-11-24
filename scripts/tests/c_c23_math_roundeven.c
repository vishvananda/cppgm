#include <fenv.h>
#include <float.h>
#include <math.h>

#define CHECK(name, type, suffix, largest) \
	static int name(void) \
	{ \
		type (*volatile call)(type) = roundeven##suffix; \
		if (call(1.5) != 2 || call(2.5) != 2 || call(3.5) != 4 || call(-2.5) != -2 || call(-3.5) != -4) \
			return 1; \
		const type positive_zero = call(0.5); \
		const type negative_zero = call(-0.5); \
		if (positive_zero != 0 || negative_zero != 0 || signbit(positive_zero) || !signbit(negative_zero)) \
			return 2; \
		if (!signbit(call(-0.0)) || signbit(call(0.0))) \
			return 3; \
		if (call(largest) != largest || call(-largest) != -largest || call(INFINITY) != INFINITY || \
			call(-INFINITY) != -INFINITY || !isnan(call(NAN))) \
			return 4; \
		return 0; \
	}

CHECK(check_float, float, f, FLT_MAX)
CHECK(check_double, double, , DBL_MAX)
CHECK(check_long_double, long double, l, LDBL_MAX)

static int check_all(void)
{
	const int single = check_float();
	if (single)
		return 10 + single;
	const int real = check_double();
	if (real)
		return 20 + real;
	const int wide = check_long_double();
	return wide ? 30 + wide : 0;
}

int main(void)
{
	const int initial = check_all();
	if (initial)
		return initial;
#if defined(FE_UPWARD) && defined(FE_DOWNWARD)
	const int saved = fegetround();
	if (fesetround(FE_UPWARD) != 0 || check_all() != 0)
		return 41;
	if (fesetround(FE_DOWNWARD) != 0 || check_all() != 0)
		return 42;
	return fesetround(saved) != 0;
#else
	return 0;
#endif
}
