#include <errno.h>
#include <float.h>
#include <math.h>

#define CHECK(fn, args, error, predicate) \
	do \
	{ \
		typeof(&(fn)) volatile call = (fn); \
		errno = EILSEQ; \
		const typeof(call args) result = call args; \
		if (errno != (error) || !(predicate)) \
			return __LINE__; \
	} while (0)

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
	CHECK(exp, (DBL_MAX), ERANGE, result == INFINITY);
	CHECK(expf, (FLT_MAX), ERANGE, result == INFINITY);

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
	return 0;
}
