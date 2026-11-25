#include <errno.h>
#include <float.h>
#include <limits.h>
#include <math.h>

static_assert(math_errhandling == MATH_ERRNO);

// Keep every failure status nonzero when WASI returns an 8-bit exit status.
#define FAILURE (((__LINE__ - 1) % 255) + 1)

#define CHECK(fn, args, error, predicate) \
	do \
	{ \
		typeof(&(fn)) volatile call = (fn); \
		errno = EILSEQ; \
		const typeof(call args) result = call args; \
		if (errno != (error) || !(predicate)) \
			return FAILURE; \
	} while (0)

static __attribute__((noinline)) int error_byte_change(const unsigned char* cell, double angle)
{
	const unsigned char before = *cell;
	volatile double result = sin(angle);
	(void)result;
	return *cell - before;
}

int main(void)
{
	CHECK(sqrt, (-1.0), EDOM, isnan(result));
	CHECK(sqrtf, (-INFINITY), EDOM, isnan(result));
	CHECK(sqrtl, (-1.0L), EDOM, isnan(result));
	CHECK(sqrt, (-0.0), EILSEQ, result == 0 && signbit(result));
	CHECK(sqrt, (NAN), EILSEQ, isnan(result));
	CHECK(sqrt, (4.0), EILSEQ, result == 2.0);
	CHECK(fabs, (-3.0), EILSEQ, result == 3.0);
	CHECK(copysign, (4.0, -0.0), EILSEQ, result == -4.0);
	CHECK(log, (-2.0), EDOM, isnan(result));
	CHECK(logf, (0.0f), ERANGE, result == -INFINITY);
	CHECK(log, (NAN), EILSEQ, isnan(result));
	CHECK(log10, (-0.5), EDOM, isnan(result));
	CHECK(log10, (-INFINITY), EDOM, isnan(result));
	CHECK(log10, (-0.0), ERANGE, result == -INFINITY);
	CHECK(log10, (-NAN), EILSEQ, isnan(result));
	CHECK(log10, (DBL_TRUE_MIN), EILSEQ, result < -300 && isfinite(result));
	CHECK(log10f, (-0.5f), EDOM, isnan(result));
	CHECK(log10f, (0.0f), ERANGE, result == -INFINITY);
	CHECK(log10f, (-NAN), EILSEQ, isnan(result));
	CHECK(log10f, (1.0f), EILSEQ, result == 0.0f && !signbit(result));
	CHECK(log1p, (-INFINITY), EDOM, isnan(result));
	CHECK(log1p, (-0x1.0000000000001p0), EDOM, isnan(result));
	CHECK(log1p, (-1.0), ERANGE, result == -INFINITY);
	CHECK(log1p, (-0x1.fffffffffffffp-1), EILSEQ, isfinite(result));
	CHECK(log1p, (-NAN), EILSEQ, isnan(result));
	CHECK(log1p, (-0.0), EILSEQ, result == 0 && signbit(result));
	CHECK(log1pf, (-0x1.000002p0f), EDOM, isnan(result));
	CHECK(log1pf, (-1.0f), ERANGE, result == -INFINITY);
	CHECK(log1pf, (-0x1.fffffep-1f), EILSEQ, isfinite(result));
	CHECK(log1pf, (-NAN), EILSEQ, isnan(result));
	CHECK(log1pf, (INFINITY), EILSEQ, result == INFINITY);

	CHECK(acosh, (0x1.fffffffffffffp-1), EDOM, isnan(result));
	CHECK(acosh, (-0x1.a17e45b8ac257p+22), EDOM, isnan(result));
	CHECK(acosh, (1.0), EILSEQ, result == 0 && !signbit(result));
	CHECK(acosh, (-NAN), EILSEQ, isnan(result));
	CHECK(acoshf, (-0.0f), EDOM, isnan(result));
	CHECK(acoshf, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(acoshl, (1.0L - 0x1p-113L), EDOM, isnan(result));
	CHECK(acoshl, (1.0L + 0x1p-112L), EILSEQ, result > 0x1p-56L && result < 0x1p-55L);
	CHECK(acoshl, (LDBL_MAX), EILSEQ, result > 11000 && isfinite(result));
	CHECK(acoshl, (NAN), EILSEQ, isnan(result));
	CHECK(atanh, (-2.0), EDOM, isnan(result));
	CHECK(atanh, (-1.0), ERANGE, result == -INFINITY);
	CHECK(atanh, (0x1.fffffffffffffp-1), EILSEQ, isfinite(result));
	CHECK(atanh, (NAN), EILSEQ, isnan(result));
	CHECK(atanhf, (-INFINITY), EDOM, isnan(result));
	CHECK(atanhf, (1.0f), ERANGE, result == INFINITY);
	CHECK(atanhf, (-0.0f), EILSEQ, result == 0 && signbit(result));
	CHECK(atanhl, (1.0L + 0x1p-112L), EDOM, isnan(result));
	CHECK(atanhl, (1.0L), ERANGE, result == INFINITY);
	CHECK(atanhl, (-1.0L), ERANGE, result == -INFINITY);
	CHECK(atanhl, (1.0L - 0x1p-113L), EILSEQ, result > 39 && isfinite(result));
	CHECK(atanhl, (0x1p-1000L), EILSEQ, result == 0x1p-1000L);
	CHECK(atanhl, (-NAN), EILSEQ, isnan(result));

	CHECK(sin, (INFINITY), EDOM, isnan(result));
	CHECK(sinf, (-INFINITY), EDOM, isnan(result));
	CHECK(sinl, (INFINITY), EDOM, isnan(result));
	CHECK(cos, (-INFINITY), EDOM, isnan(result));
	CHECK(cosf, (INFINITY), EDOM, isnan(result));
	CHECK(cosl, (-INFINITY), EDOM, isnan(result));
	CHECK(tan, (INFINITY), EDOM, isnan(result));
	CHECK(tanf, (-INFINITY), EDOM, isnan(result));
	CHECK(tanl, (INFINITY), EDOM, isnan(result));
	CHECK(sin, (-NAN), EILSEQ, isnan(result));
	CHECK(cosf, (NAN), EILSEQ, isnan(result));
	CHECK(tanl, (-NAN), EILSEQ, isnan(result));
	CHECK(sinf, (-0.0f), EILSEQ, result == 0 && signbit(result));
	CHECK(tan, (-0.0), EILSEQ, result == 0 && signbit(result));
	CHECK(cosl, (0x1p-1000L), EILSEQ, result == 1.0L);
	CHECK(sinl, (LDBL_MAX), EILSEQ, isfinite(result) && result >= -1.0L && result <= 1.0L);
	CHECK(tanl, (0x1.ffffffffffffffffffffffffff90p-57L), EILSEQ, result == 0x1.ffffffffffffffffffffffffff91p-57L);

	CHECK(asin, (-0x1.0000000000001p0), EDOM, isnan(result));
	CHECK(asinf, (0x1.000002p0f), EDOM, isnan(result));
	CHECK(asinl, (1.0L + 0x1p-112L), EDOM, isnan(result));
	CHECK(acos, (INFINITY), EDOM, isnan(result));
	CHECK(acosf, (-0x1.000002p0f), EDOM, isnan(result));
	CHECK(acosl, (1.0L + 0x1p-112L), EDOM, isnan(result));
	CHECK(asin, (-0.0), EILSEQ, result == 0 && signbit(result));
	CHECK(asinl, (-NAN), EILSEQ, isnan(result));
	CHECK(acos, (1.0), EILSEQ, result == 0 && !signbit(result));
	CHECK(acosf, (0x1p-26f), EILSEQ, result == 0x1.921fb6p+0f);
	CHECK(acosf, (-1.0f), EILSEQ, result == 0x1.921fb6p+1f);
	CHECK(acosl, (1.0L - 0x1p-113L), EILSEQ, result > 0 && result < 0x1p-55L);

	// Use -fmath-errno when compiling these direct calls with SDK Clang.
	volatile double invalid_log = -2.0;
	errno = EILSEQ;
	if (!isnan(log1p(invalid_log)) || errno != EDOM)
		return FAILURE;
	volatile long double pole = -1.0L;
	errno = EILSEQ;
	if (atanhl(pole) != -INFINITY || errno != ERANGE)
		return FAILURE;
	volatile double infinite_angle = INFINITY;
	errno = EILSEQ;
	if (!isnan(sin(infinite_angle)) || errno != EDOM)
		return FAILURE;
	errno = EILSEQ;
	if (error_byte_change((const unsigned char*)&errno, infinite_angle) != (unsigned char)EDOM - (unsigned char)EILSEQ)
		return FAILURE;
	volatile float outside_unit = 1.25f;
	errno = EILSEQ;
	if (!isnan(acosf(outside_unit)) || errno != EDOM)
		return FAILURE;

	CHECK(exp, (DBL_MAX), ERANGE, result == INFINITY);
	CHECK(expf, (FLT_MAX), ERANGE, result == INFINITY);

	// Adjacent inputs on opposite sides of the nearest-even overflow threshold.
	CHECK(exp, (0x1.62e42fefa39efp+9), EILSEQ, isfinite(result));
	CHECK(exp, (0x1.62e42fefa39f0p+9), ERANGE, result == INFINITY);
	CHECK(exp, (710.0), ERANGE, result == INFINITY);
	CHECK(exp, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(exp, (-INFINITY), EILSEQ, result == 0 && !signbit(result));
	CHECK(exp, (NAN), EILSEQ, isnan(result));
	CHECK(expm1, (0x1.62e42fefa39efp+9), EILSEQ, isfinite(result));
	CHECK(expm1, (0x1.62e42fefa39f0p+9), ERANGE, result == INFINITY);
	CHECK(expm1, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(expm1, (-INFINITY), EILSEQ, result == -1.0);
	CHECK(expm1f, (0x1.62e42ep+6f), EILSEQ, isfinite(result));
	CHECK(expm1f, (0x1.62e430p+6f), ERANGE, result == INFINITY);
	CHECK(expm1f, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(expm1f, (-0.0f), EILSEQ, result == 0 && signbit(result));
	CHECK(exp10, (0x1.34413509f79fep+8), EILSEQ, isfinite(result));
	CHECK(exp10, (0x1.34413509f79ffp+8), ERANGE, result == INFINITY);
	CHECK(exp10, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(exp10, (NAN), EILSEQ, isnan(result));
	CHECK(exp10f, (0x1.344134p+5f), EILSEQ, isfinite(result));
	CHECK(exp10f, (0x1.344136p+5f), ERANGE, result == INFINITY);
	CHECK(exp10f, (-INFINITY), EILSEQ, result == 0 && !signbit(result));
	CHECK(exp2l, (0x1.ffffffffffffffffffffffffffffp+13L), EILSEQ, isfinite(result));
	CHECK(exp2l, (LDBL_MAX_EXP), ERANGE, result == INFINITY);
	CHECK(exp2l, (-0x1.00fc5aep+14L), EILSEQ, result == 0x0.0000000000000000785d125292bcp-16382L);
	CHECK(exp2l, (-16494.0L), EILSEQ, result == LDBL_TRUE_MIN);
	CHECK(exp2l, (-16495.0L), EILSEQ, result == 0 && !signbit(result));
	CHECK(exp2l, (INFINITY), EILSEQ, result == INFINITY);

	CHECK(scalbn, (DBL_MAX, 1), ERANGE, result == INFINITY);
	CHECK(scalbnf, (-FLT_MAX, 1), ERANGE, result == -INFINITY);
	CHECK(scalbnl, (LDBL_MAX, 1), ERANGE, result == INFINITY);
	CHECK(scalbln, (DBL_MAX, LONG_MAX), ERANGE, result == INFINITY);
	CHECK(ldexpf, (FLT_MAX, 1), ERANGE, result == INFINITY);
	CHECK(ldexpl, (-LDBL_MAX, INT_MAX), ERANGE, result == -INFINITY);
	CHECK(scalbn, (-INFINITY, INT_MAX), EILSEQ, result == -INFINITY);
	CHECK(scalbnl, (NAN, 1), EILSEQ, isnan(result));
	CHECK(scalbnf, (1.0f, -150), EILSEQ, result == 0.0f);
	CHECK(scalbnf, (0x1.000002p0f, -150), EILSEQ, result == FLT_TRUE_MIN);
	CHECK(scalbn, (-1.0, INT_MIN), EILSEQ, result == 0.0 && signbit(result));
	CHECK(scalbn, (DBL_TRUE_MIN, 1074), EILSEQ, result == 1.0);
	CHECK(scalbn, (0x1.fffffffffffffp0, -1023), EILSEQ, result == DBL_MIN);
	CHECK(scalbnl, (LDBL_TRUE_MIN, 16494), EILSEQ, result == 1.0L);
	CHECK(scalblnl, (-0.0L, LONG_MAX), EILSEQ, result == 0.0L && signbit(result));

	CHECK(logl, (0.0L), ERANGE, result == -INFINITY);
	CHECK(log10l, (-2.0L), EDOM, isnan(result));
	CHECK(logp1l, (-INFINITY), EDOM, isnan(result));
	CHECK(logp1l, (-1.0L), ERANGE, result == -INFINITY);
	CHECK(logp1, (-2.0), EDOM, isnan(result));
	CHECK(logp1f, (-1.0f), ERANGE, result == -INFINITY);
	CHECK(log2p1, (-1.0), ERANGE, result == -INFINITY);
	CHECK(log10p1f, (-2.0f), EDOM, isnan(result));

	CHECK(expm1l, (LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(expm1l, (-LDBL_MAX), EILSEQ, result == -1.0L);
	CHECK(exp2m1l, (LDBL_MAX_EXP), ERANGE, result == INFINITY);
	CHECK(exp2m1l, (LDBL_MAX_EXP - 1), EILSEQ, isfinite(result));
	CHECK(expl, (LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(exp10l, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(exp10m1l, (LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(exp10m1f, (FLT_MAX), ERANGE, result == INFINITY);

	CHECK(sinpil, (INFINITY), EDOM, isnan(result));
	CHECK(cospil, (NAN), EILSEQ, isnan(result));
	CHECK(tanpil, (0.5L), ERANGE, result == INFINITY);
	CHECK(asinpil, (2.0L), EDOM, isnan(result));
	CHECK(acospil, (-2.0L), EDOM, isnan(result));
	CHECK(acospif, (-2.0f), EDOM, isnan(result));
	CHECK(rsqrtl, (-0.0L), ERANGE, result == -INFINITY);
	CHECK(fromfpl, (16.0L, FP_INT_TOWARDZERO, 4), EDOM, isnan(result));

	CHECK(powl, (-2.0L, 0.5L), EDOM, isnan(result));
	CHECK(powl, (-0.0L, -3.0L), ERANGE, result == -INFINITY);
	CHECK(powrl, (0.0L, 0.0L), EDOM, isnan(result));
	CHECK(pownl, (-INFINITY, 3), EILSEQ, result == -INFINITY);
	CHECK(pownl, (LDBL_MAX, 2), ERANGE, result == INFINITY);
	CHECK(pownf, (-FLT_MAX, 3), ERANGE, result == -INFINITY);
	CHECK(powrf, (2.0f, 10000.0f), ERANGE, result == INFINITY);
	CHECK(compoundn, (DBL_MAX, 2), ERANGE, result == INFINITY);
	CHECK(compoundnf, (-1.0f, -1), ERANGE, result == INFINITY);
	CHECK(rootnl, (-0.0L, -3), ERANGE, result == -INFINITY);
	CHECK(rootn, (-2.0, 2), EDOM, isnan(result));
	CHECK(rootnf, (-8.0f, 3), EILSEQ, result == -2.0f);

	int quotient;
	CHECK(remquol, (1.0L, 0.0L, &quotient), EDOM, isnan(result));
	CHECK(remainderl, (INFINITY, 1.0L), EDOM, isnan(result));
	CHECK(remainderl, (1.0L, INFINITY), EILSEQ, result == 1.0L);
	CHECK(fadd, (FLT_MAX, FLT_MAX), ERANGE, result == INFINITY);
	CHECK(fadd, (0x1.ffffffp127, 0.0), ERANGE, result == INFINITY);
	CHECK(fadd, (0x1.ffffffp127, -0x1p74), EILSEQ, result == FLT_MAX);
	CHECK(fsub, (INFINITY, INFINITY), EDOM, isnan(result));
	CHECK(fmul, (0.0, INFINITY), EDOM, isnan(result));
	CHECK(fdiv, (0.0, 0.0), EDOM, isnan(result));
	CHECK(fdivl, (1.0L, -0.0L), ERANGE, result == -INFINITY);
	CHECK(fdivl, (INFINITY, 0.0L), EILSEQ, result == INFINITY);
	CHECK(ffmal, (LDBL_MAX, 2.0L, -LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(dfmal, (2.0L, 3.0L, 1.0L), EILSEQ, result == 7.0);
	CHECK(fsqrt, (DBL_MAX), ERANGE, result == INFINITY);
	CHECK(fsqrtl, (-1.0L), EDOM, isnan(result));
	CHECK(dsqrtl, (NAN), EILSEQ, isnan(result));
	CHECK(hypot, (DBL_MAX, DBL_MAX), ERANGE, result == INFINITY);
	CHECK(hypotf, (FLT_MAX, -FLT_MAX), ERANGE, result == INFINITY);
	CHECK(hypotl, (-LDBL_MAX, LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(hypot, (DBL_MAX, DBL_TRUE_MIN), EILSEQ, result == DBL_MAX);
	CHECK(hypotf, (0x1.0000e6p+0f, 0x1.48d5ep+5f), EILSEQ, result == 0x1.48eec8p+5f);
	CHECK(hypotl, (LDBL_TRUE_MIN, LDBL_TRUE_MIN), EILSEQ, result == LDBL_TRUE_MIN);
	CHECK(hypot, (NAN, -INFINITY), EILSEQ, result == INFINITY);
	CHECK(hypotf, (-INFINITY, NAN), EILSEQ, result == INFINITY);
	CHECK(hypotl, (NAN, -INFINITY), EILSEQ, result == INFINITY);
	CHECK(hypotl, (NAN, 1.0L), EILSEQ, isnan(result));
	CHECK(hypotl, (-0.0L, -0.0L), EILSEQ, result == 0.0L && !signbit(result));

	CHECK(fmaf, (FLT_MAX, 3.0f, -FLT_MAX), ERANGE, result == INFINITY);
	CHECK(fmaf, (-FLT_MAX, 3.0f, FLT_MAX), ERANGE, result == -INFINITY);
	CHECK(fmaf, (FLT_MAX, 2.0f, -FLT_MAX), EILSEQ, result == FLT_MAX);
	CHECK(fmaf, (FLT_MAX, 1.0f, 0x1p103f), ERANGE, result == INFINITY);
	CHECK(fmaf, (FLT_MAX, 1.0f, 0x1.fffffep102f), EILSEQ, result == FLT_MAX);
	CHECK(fmaf, (0x1.fffffcp-76f, 0x1.000002p-75f, 0x1.fffffcp-127f), EILSEQ, result == 0x1.fffffcp-127f);
	CHECK(fmaf, (INFINITY, 2.0f, 1.0f), EILSEQ, result == INFINITY);
	CHECK(fmaf, (NAN, 2.0f, 1.0f), EILSEQ, isnan(result));
	CHECK(fmaf, (-0.0f, 1.0f, -0.0f), EILSEQ, result == 0.0f && signbit(result));

	const long double finite_edge = 0x1.62e9bb80635d81d36125b64da4a6p+13L;
	const long double overflow_edge = 0x1.62e9bb80635d81d36125b64da4a7p+13L;
	CHECK(sinhl, (-LDBL_MAX), ERANGE, result == -INFINITY);
	CHECK(coshl, (-LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(sinhl, (finite_edge), EILSEQ, result > LDBL_MAX * 0.99L && isfinite(result));
	CHECK(coshl, (-finite_edge), EILSEQ, result > LDBL_MAX * 0.99L && isfinite(result));
	CHECK(sinhl, (-overflow_edge), ERANGE, result == -INFINITY);
	CHECK(coshl, (overflow_edge), ERANGE, result == INFINITY);
	CHECK(sinhl, (-0.0L), EILSEQ, result == 0.0L && signbit(result));
	CHECK(coshl, (0x1p-3000L), EILSEQ, result == 1.0L);
	CHECK(sinhl, (-0x1p-3000L), EILSEQ, result == -0x1p-3000L);
	CHECK(coshl, (-INFINITY), EILSEQ, result == INFINITY);
	CHECK(sinhl, (-INFINITY), EILSEQ, result == -INFINITY);
	CHECK(coshl, (NAN), EILSEQ, isnan(result));

	CHECK(nextafterf, (FLT_MAX, INFINITY), ERANGE, result == INFINITY);
	CHECK(nextafter, (-DBL_MAX, -INFINITY), ERANGE, result == -INFINITY);
	CHECK(nextafterl, (LDBL_MAX, INFINITY), ERANGE, result == INFINITY);
	CHECK(nexttowardf, (1.0f, 1.0L + 0x1p-112L), EILSEQ, result == 0x1.000002p0f);
	CHECK(nexttoward, (1.0, 1.0L - 0x1p-112L), EILSEQ, result == 0x1.fffffffffffffp-1);
	CHECK(nexttowardl, (-LDBL_MAX, -INFINITY), ERANGE, result == -INFINITY);
	CHECK(nextafterl, (-0.0L, 0.0L), EILSEQ, result == 0.0L && !signbit(result));
	CHECK(nextafterf, (0.0f, -0.0f), EILSEQ, result == 0.0f && signbit(result));
	CHECK(nextupf, (FLT_MAX), EILSEQ, result == INFINITY);
	CHECK(nextupl, (-INFINITY), EILSEQ, result == -LDBL_MAX);
	CHECK(nextupl, (-LDBL_TRUE_MIN), EILSEQ, result == 0 && signbit(result));
	CHECK(nextdown, (0.0), EILSEQ, result == -DBL_TRUE_MIN);
	CHECK(nextdownl, (-LDBL_MAX), EILSEQ, result == -INFINITY);
	CHECK(nextup, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(nextdownf, (NAN), EILSEQ, isnan(result));
	CHECK(fdim, (DBL_MAX, -DBL_MAX), ERANGE, result == INFINITY);
	CHECK(fdimf, (FLT_MAX, -FLT_MAX), ERANGE, result == INFINITY);
	CHECK(fdiml, (LDBL_MAX, -LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(fdiml, (INFINITY, -INFINITY), EILSEQ, result == INFINITY);
	CHECK(fdiml, (INFINITY, INFINITY), EILSEQ, result == 0.0L && !signbit(result));
	CHECK(fdim, (-0.0, +0.0), EILSEQ, result == 0.0 && !signbit(result));
	CHECK(fdimf, (NAN, 0.0f), EILSEQ, isnan(result));

	CHECK(fmod, (1.0, 0.0), EDOM, isnan(result));
	CHECK(fmodf, (INFINITY, 1.0f), EDOM, isnan(result));
	CHECK(fmodl, (1.0L, -0.0L), EDOM, isnan(result));
	CHECK(fmod, (INFINITY, NAN), EILSEQ, isnan(result));
	CHECK(fmod, (-2.0, INFINITY), EILSEQ, result == -2.0);
	CHECK(fmodl, (-6.0L, 2.0L), EILSEQ, result == 0 && signbit(result));
	CHECK(fmodl, (0x1p9000L, 7.0L), EILSEQ, result == 1.0L);
	CHECK(fmodf, (4 * FLT_TRUE_MIN, 3 * FLT_TRUE_MIN), EILSEQ, result == FLT_TRUE_MIN);
	CHECK(remainder, (5.0, 2.0), EILSEQ, result == 1.0);
	CHECK(remainder, (7.0, 2.0), EILSEQ, result == -1.0);
	CHECK(remainderf, (1.0f, 0.0f), EDOM, isnan(result));
	CHECK(remainderl, (0x1p9000L, 7.0L), EILSEQ, result == 1.0L);
	CHECK(remquo, (-7.0, 2.0, &quotient), EILSEQ, result == 1.0 && quotient % 8 == -4);
	CHECK(remquof, (7.0f, -2.0f, &quotient), EILSEQ, result == -1.0f && quotient % 8 == -4);
	CHECK(remquol, (0x1p9000L, 7.0L, &quotient), EILSEQ, result == 1.0L && quotient % 8 == 1);
	CHECK(remquo, (1.0, 0.0, &quotient), EDOM, isnan(result));
	CHECK(remquof, (INFINITY, 1.0f, &quotient), EDOM, isnan(result));
	CHECK(remquol, (1.0L, 0.0L, &quotient), EDOM, isnan(result));

	CHECK(pow, (-0.0, -1.0), ERANGE, result == -INFINITY);
	CHECK(powf, (-0.0f, -3.0f), ERANGE, result == -INFINITY);
	CHECK(pow, (-0.0, -2.0), ERANGE, result == INFINITY);
	CHECK(powf, (-0.0f, -0.5f), ERANGE, result == INFINITY);
	CHECK(pow, (DBL_TRUE_MIN, -1.0), ERANGE, result == INFINITY);
	CHECK(powf, (FLT_TRUE_MIN, -1.0f), ERANGE, result == INFINITY);
	CHECK(pow, (-INFINITY, -1.0), EILSEQ, result == 0.0 && signbit(result));
	CHECK(powf, (-0.0f, 3.0f), EILSEQ, result == 0.0f && signbit(result));
	CHECK(pow, (0x1p-520, 2.0), EILSEQ, result == 0x1p-1040);

	CHECK(logb, (-0.0), ERANGE, result == -INFINITY);
	CHECK(logbf, (0.0f), ERANGE, result == -INFINITY);
	CHECK(logbl, (-0.0L), ERANGE, result == -INFINITY);
	CHECK(logb, (-INFINITY), EILSEQ, result == INFINITY);
	CHECK(logbf, (NAN), EILSEQ, isnan(result));
	CHECK(logbl, (-0x1p4000L), EILSEQ, result == 4000);
	CHECK(logb, (-DBL_TRUE_MIN), EILSEQ, result == DBL_MIN_EXP - DBL_MANT_DIG);
	CHECK(logbf, (3 * FLT_TRUE_MIN), EILSEQ, result == FLT_MIN_EXP - FLT_MANT_DIG + 1);
	CHECK(logbl, (LDBL_TRUE_MIN), EILSEQ, result == LDBL_MIN_EXP - LDBL_MANT_DIG);
	CHECK(ilogb, (-0.0), EDOM, result == FP_ILOGB0);
	CHECK(ilogbf, (-INFINITY), EDOM, result == INT_MAX);
	CHECK(ilogbl, (NAN), EDOM, result == FP_ILOGBNAN);
	CHECK(ilogbf, (-0x1p-127f), EILSEQ, result == -127);
	CHECK(ilogbl, (-0x1p-16492L), EILSEQ, result == -16492);
	CHECK(llogbf, (-0.0f), EDOM, result == FP_LLOGB0);
	CHECK(llogbl, (-INFINITY), EDOM, result == LONG_MAX);
	CHECK(llogb, (NAN), EDOM, result == FP_LLOGBNAN);
	CHECK(llogbl, (-LDBL_TRUE_MIN), EILSEQ, result == LDBL_MIN_EXP - LDBL_MANT_DIG);

	CHECK(tgamma, (DBL_MAX), ERANGE, result == INFINITY);
	CHECK(tgammaf, (36.0f), ERANGE, result == INFINITY);
	CHECK(tgammal, (LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(tgamma, (-DBL_TRUE_MIN), ERANGE, result == -INFINITY);
	CHECK(tgammaf, (FLT_TRUE_MIN), ERANGE, result == INFINITY);
	CHECK(tgammal, (LDBL_TRUE_MIN), ERANGE, result == INFINITY);
	CHECK(tgamma, (-0.0), ERANGE, result == -INFINITY);
	CHECK(tgammaf, (0.0f), ERANGE, result == INFINITY);
	CHECK(tgammal, (-0.0L), ERANGE, result == -INFINITY);
	CHECK(tgamma, (-2.0), EDOM, isnan(result));
	CHECK(tgammaf, (-INFINITY), EDOM, isnan(result));
	CHECK(tgammal, (-0x1p4000L), EDOM, isnan(result));
	CHECK(tgamma, (NAN), EILSEQ, isnan(result));
	CHECK(tgammal, (INFINITY), EILSEQ, result == INFINITY);
	CHECK(tgammal, (-2048.5L), EILSEQ, result == 0.0L && signbit(result));

	// These MPFR reference values also exercise the range beyond binary64.
	const long double gamma_200 = 0x1.aa92d76671760de7dfd12738e862p+1237L;
	const long double gamma_negative = 0x1.149200acaee93e761aa11c11e63bp-2L;
	const long double log_gamma_large = 0x1.5a72d6d005c939a38650bac4e7b7p+4011L;
	const long double log_gamma_small = 0x1.5a92d6d005c939a38650bac4e7b7p+10L;
	CHECK(tgammal, (200.0L), EILSEQ, fabsl(result - gamma_200) <= 0x1p-109L * gamma_200);
	CHECK(tgammal, (-3.5L), EILSEQ, fabsl(result - gamma_negative) <= 0x1p-109L * gamma_negative);
	CHECK(tgammal, (-0x1p-2000L), EILSEQ, result == -0x1p2000L);
	CHECK(lgammal, (0x1p4000L), EILSEQ, fabsl(result - log_gamma_large) <= 0x1p-109L * log_gamma_large);
	CHECK(lgammal, (0x1p-2000L), EILSEQ, fabsl(result - log_gamma_small) <= 0x1p-109L * log_gamma_small);
	CHECK(lgamma, (DBL_MAX), ERANGE, result == INFINITY);
	CHECK(lgammaf, (FLT_MAX), ERANGE, result == INFINITY);
	CHECK(lgammal, (LDBL_MAX), ERANGE, result == INFINITY);
	CHECK(lgamma, (-2.0), ERANGE, result == INFINITY);
	CHECK(lgammaf, (0.0f), ERANGE, result == INFINITY);
	CHECK(lgammal, (-0.0L), ERANGE, result == INFINITY);
	CHECK(lgammal, (-0x1p4000L), ERANGE, result == INFINITY);
	CHECK(lgammal, (-INFINITY), EILSEQ, result == INFINITY);
	CHECK(lgammaf, (NAN), EILSEQ, isnan(result));

	volatile float large_float = FLT_MAX;
	errno = EILSEQ;
	if (fmaf(large_float, 3.0f, -large_float) != INFINITY || errno != ERANGE)
		return FAILURE;
	volatile double large_double = DBL_MAX;
	errno = EILSEQ;
	if (hypot(large_double, large_double) != INFINITY || errno != ERANGE)
		return FAILURE;
	volatile long double large_quad = LDBL_MAX;
	errno = EILSEQ;
	if (coshl(large_quad) != INFINITY || errno != ERANGE)
		return FAILURE;
	errno = EILSEQ;
	if (nextafterf(large_float, INFINITY) != INFINITY || errno != ERANGE)
		return FAILURE;
	errno = EILSEQ;
	if (fdim(large_double, -large_double) != INFINITY || errno != ERANGE)
		return FAILURE;
	volatile double finite = 1.0;
	volatile double zero = 0.0;
	errno = EILSEQ;
	if (!isnan(fmod(finite, zero)) || errno != EDOM)
		return FAILURE;
	errno = EILSEQ;
	if (!isnan(remquo(finite, zero, &quotient)) || errno != EDOM)
		return FAILURE;
	volatile double negative_power = -1.0;
	volatile double negative_zero = -0.0;
	errno = EILSEQ;
	if (pow(negative_zero, negative_power) != -INFINITY || errno != ERANGE)
		return FAILURE;
	errno = EILSEQ;
	if (ilogb(negative_zero) != FP_ILOGB0 || errno != EDOM)
		return FAILURE;
	errno = EILSEQ;
	if (logb(negative_zero) != -INFINITY || errno != ERANGE)
		return FAILURE;
	errno = EILSEQ;
	if (tgamma(negative_zero) != -INFINITY || errno != ERANGE)
		return FAILURE;
	errno = EILSEQ;
	if (lgammal(large_quad) != INFINITY || errno != ERANGE)
		return FAILURE;
	return 0;
}
