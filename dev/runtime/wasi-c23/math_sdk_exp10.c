// Adapted from WASI SDK 34 libc's exp10.c and exp10f.c.
#include "math_error.h"

double exp10(double x)
{
	static const double powers[] = { 1e-15, 1e-14, 1e-13, 1e-12, 1e-11, 1e-10, 1e-9, 1e-8, 1e-7, 1e-6, 1e-5, 1e-4, 1e-3,
		1e-2, 1e-1, 1.0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9, 1e10, 1e11, 1e12, 1e13, 1e14, 1e15 };
	const double log2_10 = 0x1.a934f0979a371p+1;
	if (__builtin_fabs(x) < 16.0)
	{
		const int integral = (int)x;
		const double fraction = x - integral;
		const double power = powers[integral + 15];
		return fraction == 0.0 ? power : power * exp2(log2_10 * fraction);
	}
	if (!isfinite(x))
		return x < 0 ? 0.0 : x + x;
	const double result = pow(10.0, x);
	if (result == INFINITY)
		errno = ERANGE;
	return result;
}

float exp10f(float x)
{
	static const float powers[] = { 1e-7f, 1e-6f, 1e-5f, 1e-4f, 1e-3f, 1e-2f, 1e-1f, 1.0f, 1e1f, 1e2f, 1e3f, 1e4f, 1e5f,
		1e6f, 1e7f };
	const double log2_10 = 0x1.a934f0979a371p+1;
	if (__builtin_fabsf(x) < 8.0f)
	{
		const int integral = (int)x;
		const float fraction = x - integral;
		const float power = powers[integral + 7];
		return fraction == 0.0f ? power : power * exp2f((float)log2_10 * fraction);
	}
	if (!isfinite(x))
		return x < 0 ? 0.0f : x + x;
	const float result = exp2(log2_10 * x);
	if (result == INFINITY)
		errno = ERANGE;
	return result;
}

// Each SDK member groups the standard and compatibility spellings.
double pow10(double x) __attribute__((weak, alias("exp10")));
float pow10f(float x) __attribute__((weak, alias("exp10f")));
