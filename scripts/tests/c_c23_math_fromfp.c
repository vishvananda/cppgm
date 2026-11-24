#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <limits.h>
#include <math.h>

static const struct
{
	int direction;
	int positive;
	int negative;
} non_ties[] = {
	{ FP_INT_UPWARD, 3, -2 },
	{ FP_INT_DOWNWARD, 2, -3 },
	{ FP_INT_TOWARDZERO, 2, -2 },
	{ FP_INT_TONEARESTFROMZERO, 2, -2 },
	{ FP_INT_TONEAREST, 2, -2 },
};

#define CHECK(name, type, suffix, max_exp, largest) \
	static int name(void) \
	{ \
		type (*const signed_calls[])(type, int, unsigned) = { fromfp##suffix, fromfpx##suffix }; \
		type (*const unsigned_calls[])(type, int, unsigned) = { ufromfp##suffix, ufromfpx##suffix }; \
		for (unsigned variant = 0; variant < 2; ++variant) \
		{ \
			type (*volatile s)(type, int, unsigned) = signed_calls[variant]; \
			type (*volatile u)(type, int, unsigned) = unsigned_calls[variant]; \
			for (unsigned i = 0; i < sizeof non_ties / sizeof non_ties[0]; ++i) \
				if (s(2.25, non_ties[i].direction, 8) != non_ties[i].positive || \
					s(-2.25, non_ties[i].direction, 8) != non_ties[i].negative || \
					u(2.25, non_ties[i].direction, 8) != non_ties[i].positive) \
					return 1; \
			if (s(-2.5, FP_INT_TONEARESTFROMZERO, 8) != -3 || u(2.5, FP_INT_TONEARESTFROMZERO, 8) != 3 || \
				s(-2.5, FP_INT_TONEAREST, 8) != -2 || u(2.5, FP_INT_TONEAREST, 8) != 2) \
				return 2; \
			if (s(-128, FP_INT_TOWARDZERO, 8) != -128 || s(127, FP_INT_TOWARDZERO, 8) != 127 || \
				u(255, FP_INT_TOWARDZERO, 8) != 255 || s(-1, FP_INT_TOWARDZERO, 1) != -1 || \
				u(1, FP_INT_TOWARDZERO, 1) != 1 || s(0, FP_INT_TOWARDZERO, 1) != 0) \
				return 3; \
			if (!isnan(s(-129, FP_INT_TOWARDZERO, 8)) || !isnan(s(127.25, FP_INT_UPWARD, 8)) || \
				!isnan(u(255.25, FP_INT_UPWARD, 8)) || !isnan(u(-0.25, FP_INT_DOWNWARD, 8))) \
				return 4; \
			if (s(-0.25, FP_INT_UPWARD, 1) != 0 || u(-0.25, FP_INT_UPWARD, 1) != 0 || \
				!signbit(s(-0.25, FP_INT_UPWARD, 1)) || !signbit(u(-0.25, FP_INT_UPWARD, 1))) \
				return 5; \
			if (!isnan(s(0, FP_INT_TOWARDZERO, 0)) || !isnan(u(0, FP_INT_TOWARDZERO, 0)) || \
				!isnan(s(NAN, FP_INT_TOWARDZERO, UINT_MAX)) || !isnan(u(INFINITY, FP_INT_TOWARDZERO, UINT_MAX))) \
				return 6; \
			if (s(largest, FP_INT_TOWARDZERO, UINT_MAX) != largest || \
				s(-largest, FP_INT_TOWARDZERO, max_exp + 1) != -largest || \
				u(largest, FP_INT_TOWARDZERO, max_exp) != largest || !isnan(s(largest, FP_INT_TOWARDZERO, max_exp)) || \
				!isnan(u(largest, FP_INT_TOWARDZERO, max_exp - 1))) \
				return 7; \
		} \
		return 0; \
	}

CHECK(check_float, float, f, FLT_MAX_EXP, FLT_MAX)
CHECK(check_double, double, , DBL_MAX_EXP, DBL_MAX)
CHECK(check_long_double, long double, l, LDBL_MAX_EXP, LDBL_MAX)

static int check_errors(void)
{
	double (*volatile exact)(double, int, unsigned) = fromfp;
	double (*volatile inexact)(double, int, unsigned) = fromfpx;
	errno = 0;
	feclearexcept(FE_ALL_EXCEPT);
	if (exact(1.25, FP_INT_UPWARD, 8) != 2 || errno != 0 || fetestexcept(FE_ALL_EXCEPT) != 0)
		return 1;
	if (inexact(1.25, FP_INT_UPWARD, 8) != 2 || errno != 0)
		return 2;
#ifdef FE_INEXACT
	if ((math_errhandling & MATH_ERREXCEPT) && !fetestexcept(FE_INEXACT))
		return 3;
#endif
	feclearexcept(FE_ALL_EXCEPT);
	if (!isnan(inexact(127.25, FP_INT_UPWARD, 8)))
		return 4;
	if ((math_errhandling & MATH_ERRNO) && errno != EDOM)
		return 5;
#ifdef FE_INVALID
	if ((math_errhandling & MATH_ERREXCEPT) && fetestexcept(FE_ALL_EXCEPT) != FE_INVALID)
		return 6;
#endif
	return 0;
}

int main(void)
{
	const int single = check_float();
	if (single)
		return 10 + single;
	const int real = check_double();
	if (real)
		return 20 + real;
	const int wide = check_long_double();
	if (wide)
		return 30 + wide;
	const int errors = check_errors();
	return errors ? 40 + errors : 0;
}
