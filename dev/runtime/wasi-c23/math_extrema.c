#include "math_error.h"

double fmaximum(double left, double right)
{
	return __builtin_wasm_max_f64(left, right);
}

float fmaximumf(float left, float right)
{
	return __builtin_wasm_max_f32(left, right);
}

long double fmaximuml(long double left, long double right)
{
	if (left > right)
		return left;
	if (right > left)
		return right;
	if (left == right)
		return signbit(left) ? right : left;
	return left + right;
}

double fminimum(double left, double right)
{
	return __builtin_wasm_min_f64(left, right);
}

float fminimumf(float left, float right)
{
	return __builtin_wasm_min_f32(left, right);
}

long double fminimuml(long double left, long double right)
{
	if (left < right)
		return left;
	if (right < left)
		return right;
	if (left == right)
		return signbit(left) ? left : right;
	return left + right;
}

#define DEFINE_MAGNITUDE(type, result, tie, absolute, compare) \
	type result(type left, type right) \
	{ \
		const type left_magnitude = absolute(left); \
		const type right_magnitude = absolute(right); \
		if (left_magnitude compare right_magnitude) \
			return left; \
		if (right_magnitude compare left_magnitude) \
			return right; \
		return tie(left, right); \
	}

#define DEFINE_NUMERIC(type, result, both) \
	type result(type left, type right) \
	{ \
		if (isnan(left)) \
			return isnan(right) ? both(left, right) : right; \
		if (isnan(right)) \
			return left; \
		return both(left, right); \
	}

#define DEFINE_EXTREMA(type, suffix, absolute) \
	DEFINE_MAGNITUDE(type, fmaximum_mag##suffix, fmaximum##suffix, absolute, >) \
	DEFINE_MAGNITUDE(type, fminimum_mag##suffix, fminimum##suffix, absolute, <) \
	DEFINE_NUMERIC(type, fmaximum_num##suffix, fmaximum##suffix) \
	DEFINE_NUMERIC(type, fminimum_num##suffix, fminimum##suffix) \
	DEFINE_NUMERIC(type, fmaximum_mag_num##suffix, fmaximum_mag##suffix) \
	DEFINE_NUMERIC(type, fminimum_mag_num##suffix, fminimum_mag##suffix)

DEFINE_EXTREMA(float, f, fabsf)
DEFINE_EXTREMA(double, , fabs)
DEFINE_EXTREMA(long double, l, fabsl)

#define DEFINE_POSITIVE_DIFFERENCE(type, suffix) \
	type fdim##suffix(type x, type y) \
	{ \
		if (x <= y) \
			return 0; \
		const type delta = x - y; \
		if (isinf(delta) && isfinite(x) && isfinite(y)) \
			errno = ERANGE; \
		return delta; \
	}

DEFINE_POSITIVE_DIFFERENCE(float, f)
DEFINE_POSITIVE_DIFFERENCE(double, )
DEFINE_POSITIVE_DIFFERENCE(long double, l)
