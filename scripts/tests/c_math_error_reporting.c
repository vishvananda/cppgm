#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <math.h>

int main(void)
{
	const int reporting = math_errhandling;
	if (reporting != MATH_ERRNO && reporting != MATH_ERREXCEPT && reporting != (MATH_ERRNO | MATH_ERREXCEPT))
		return 1;
#if !defined(FE_DIVBYZERO) || !defined(FE_INVALID) || !defined(FE_OVERFLOW)
	if (reporting & MATH_ERREXCEPT)
		return 2;
#endif
	errno = 0;
	feclearexcept(FE_ALL_EXCEPT);
	volatile double negative = -1.0;
	double (*volatile square_root)(double) = sqrt;
	volatile double value = square_root(negative);
	if ((reporting & MATH_ERRNO) && errno != EDOM)
		return 3;
#ifdef FE_INVALID
	if ((reporting & MATH_ERREXCEPT) && !(fetestexcept(FE_INVALID) & FE_INVALID))
		return 4;
#endif
	errno = 0;
	feclearexcept(FE_ALL_EXCEPT);
	volatile double large = DBL_MAX;
	double (*volatile exponential)(double) = exp;
	value = exponential(large);
	if ((reporting & MATH_ERRNO) && errno != ERANGE)
		return 5;
#ifdef FE_OVERFLOW
	if ((reporting & MATH_ERREXCEPT) && !(fetestexcept(FE_OVERFLOW) & FE_OVERFLOW))
		return 6;
#endif
	(void)value;
	return 0;
}
