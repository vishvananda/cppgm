#ifndef CPPGM_WASI_MATH_ERROR_H
#define CPPGM_WASI_MATH_ERROR_H

#include <errno.h>
#include <math.h>

static inline float math_domain_error(void)
{
	errno = EDOM;
	return NAN;
}

static inline float math_range_error(void)
{
	errno = ERANGE;
	return INFINITY;
}

// Use only when finite inputs can produce infinity solely by overflow.
static inline long double math_quad_overflow(long double result)
{
	if (isinf(result))
		errno = ERANGE;
	return result;
}

#endif
