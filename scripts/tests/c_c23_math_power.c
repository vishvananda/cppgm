#include <float.h>
#include <limits.h>
#include <math.h>

#define DEFINE_TEST(suffix, type) \
	static int test_##type(void) \
	{ \
		volatile type zero = -0.0; \
		volatile type below_domain = -2.0; \
		volatile type one = 1.0; \
		volatile type upper = INFINITY; \
		volatile long long even = LLONG_MIN; \
		volatile long long odd = LLONG_MAX; \
		if (pown##suffix(-one, odd) != -one || pown##suffix(-one, even) != one || pown##suffix(-one, 0) != one) \
			return 1; \
		if (!signbit(pown##suffix(zero, odd)) || signbit(pown##suffix(zero, 2)) || pown##suffix(zero, -3) != -upper || \
			pown##suffix(zero, even) != upper) \
			return 2; \
		if (powr##suffix(4 * one, 0.5 * one) != 2 * one || !isnan(powr##suffix(below_domain, 2 * one)) || \
			!isnan(powr##suffix(zero, zero)) || !isnan(powr##suffix(upper, zero)) || !isnan(powr##suffix(one, upper))) \
			return 3; \
		if (powr##suffix(zero, -one) != upper || signbit(powr##suffix(zero, one)) || \
			powr##suffix(0.5 * one, upper) != 0 || powr##suffix(2 * one, -upper) != 0) \
			return 4; \
		if (compoundn##suffix(one, 3) != 8 * one || compoundn##suffix(one, -3) != 0.125 * one || \
			compoundn##suffix(-one, -1) != upper || compoundn##suffix(-one, 1) != 0 || \
			!isnan(compoundn##suffix(below_domain, 0))) \
			return 5; \
		if (rootn##suffix(-8 * one, 3) != -2 * one || rootn##suffix(16 * one, -2) != 0.25 * one || \
			rootn##suffix(upper, -2) != 0 || rootn##suffix(-upper, 3) != -upper || \
			!isnan(rootn##suffix(below_domain, 2)) || !isnan(rootn##suffix(one, 0))) \
			return 6; \
		if (!signbit(rootn##suffix(zero, odd)) || signbit(rootn##suffix(zero, 2)) || \
			rootn##suffix(zero, -3) != -upper || rootn##suffix(zero, even) != upper) \
			return 7; \
		return 0; \
	}

typedef long double long_double;
DEFINE_TEST(f, float)
DEFINE_TEST(, double)
DEFINE_TEST(l, long_double)

int main(void)
{
	const int f = test_float();
	if (f != 0)
		return f;
	const int d = test_double();
	if (d != 0)
		return d + 10;
	const int l = test_long_double();
	if (l != 0)
		return l + 20;

	volatile double small = 0x1p-55;
	volatile long long large = 1LL << 55;
	if (!(fabs(compoundn(small, large) - 0x1.5bf0a8b145769p+1) <= 4 * DBL_EPSILON))
		return 31;
#if LDBL_MANT_DIG == 113
	volatile long double adjacent = 1.0L + 0x1p-64L;
	volatile long double power = 0x1p64L;
	volatile long double base = 0.5L;
	volatile long double minimum_exponent = (LDBL_MANT_DIG - LDBL_MIN_EXP);
	const long double e = 0x1.5bf0a8b1457695355fb8ac404e7ap+1L;
	if (!(fabsl(powrl(adjacent, power) - e) <= 0x1p-62L))
		return 32;
	if (powrl(base, minimum_exponent) != LDBL_TRUE_MIN || powrl(base, minimum_exponent + 1) != 0.0L)
		return 33;
#endif
	return 0;
}
