#include <limits.h>
#include <math.h>

#include "math_binary128.h"
#include "math_error.h"

static long double power_from_log(struct math_split logarithm, long double exponent, long double exponent_tail)
{
	const long double product = logarithm.high * exponent;
	if (!isfinite(product))
		return product > 0 ? math_range_error() : 0.0L;

	long double tail = __builtin_fmal(logarithm.high, exponent, -product) + logarithm.low * exponent;
	if (exponent_tail != 0)
		tail += logarithm.high * exponent_tail;
	const long double sum = product + tail;
	return __cppgm_wasi_exp_split(sum, (product - sum) + tail);
}

static long double positive_power(long double x, long double y)
{
	if (y == 1.0L)
		return x;
	if (y == -1.0L)
		return math_quad_overflow(1.0L / x);
	if (y == 2.0L)
		return math_quad_overflow(x * x);
	if (y == 0.5L)
		return sqrtl(x);
	return power_from_log(__cppgm_wasi_log_split(x, 0.0L), y, 0.0L);
}

long double powl(long double x, long double y)
{
	if (y == 0)
		return issignaling(x) ? x + x : 1.0L;
	if (x == 1)
		return issignaling(y) ? y + y : 1.0L;
	if (isnan(x) || isnan(y))
		return x + y;

	const long double magnitude = __builtin_fabsl(x);
	const bool finite_base = isfinite(magnitude);
	if (isinf(y))
	{
		if (magnitude == 1)
			return 1.0L;
		return (magnitude > 1) == (y > 0) ? INFINITY : 0.0L;
	}

	bool negative = false;
	if (signbit(x))
	{
		if (y == truncl(y))
		{
			const long double half = y * 0.5L;
			negative = half != truncl(half);
		}
		else if (finite_base && magnitude != 0)
			return math_domain_error();
	}
	long double result;
	if (magnitude == 0)
		result = y < 0 ? math_range_error() : 0.0L;
	else if (!finite_base)
		result = y < 0 ? 0.0L : magnitude;
	else if (magnitude == 1)
		result = 1.0L;
	else
		result = positive_power(magnitude, y);
	return negative ? -result : result;
}

long double powrl(long double x, long double y)
{
	if (isnan(x) || isnan(y))
		return x + y;
	if (x < 0 || (y == 0 && (x == 0 || isinf(x))) || (x == 1 && isinf(y)))
		return math_domain_error();
	if (y == 0 || x == 1)
		return 1.0L;
	if (isinf(x) || isinf(y))
		return (x > 1) == (y > 0) ? INFINITY : 0.0L;
	if (x == 0)
		return y < 0 ? math_range_error() : 0.0L;
	return positive_power(x, y);
}

static double checked_double_power(double x, double y)
{
	const double result = pow(x, y);
	if (isinf(result) && isfinite(x) && isfinite(y))
		errno = ERANGE;
	return result;
}

static float narrow_float_power(double value)
{
	const float result = (float)value;
	if (isinf(result) && isfinite(value))
		errno = ERANGE;
	return result;
}

static double narrow_double_power(long double value)
{
	const double result = (double)value;
	if (isinf(result) && isfinite(value))
		errno = ERANGE;
	return result;
}

double powr(double x, double y)
{
	if (isnan(x) || isnan(y))
		return x + y;
	if (x < 0 || (y == 0 && (x == 0 || isinf(x))) || (x == 1 && isinf(y)))
		return math_domain_error();
	return checked_double_power(__builtin_fabs(x), y);
}

float powrf(float x, float y)
{
	return narrow_float_power(powr(x, y));
}

long double pownl(long double x, long long n)
{
	if (n == 0)
		return issignaling(x) ? x + x : 1.0L;
	if (isnan(x))
		return x + x;

	const long double magnitude = __builtin_fabsl(x);
	long double result;
	if (magnitude == 0)
		result = n < 0 ? math_range_error() : 0.0L;
	else if (isinf(magnitude))
		result = n < 0 ? 0.0L : magnitude;
	else if (magnitude == 1)
		result = 1.0L;
	else
		result = positive_power(magnitude, n);
	return n & 1 ? __builtin_copysignl(result, x) : result;
}

double pown(double x, long long n)
{
	if ((n >= -(1LL << 53) && n <= (1LL << 53)) || n == LLONG_MIN)
		return checked_double_power(x, (double)n);
	return narrow_double_power(pownl(x, n));
}

float pownf(float x, long long n)
{
	return narrow_float_power(pown(x, n));
}

long double compoundnl(long double x, long long n)
{
	if (x < -1)
		return math_domain_error();
	if (n == 0 || x == 0)
		return 1.0L;
	if (n == 1)
		return 1.0L + x;
	if (x == -1 || !isfinite(x))
		return powrl(1.0L + x, n);
	if (__builtin_fabsl(x) <= 0x1p-177L)
		return 1.0L;

	const long double base = 1.0L + x;
	// Retain the increment even when forming the base rounds to one.
	const long double tail = x < 1 ? (1.0L - base) + x : (x - base) + 1.0L;
	return power_from_log(__cppgm_wasi_log_split(base, tail), n, 0.0L);
}

double compoundn(double x, long long n)
{
	return narrow_double_power(compoundnl(x, n));
}

float compoundnf(float x, long long n)
{
	if (x < -1)
		return math_domain_error();
	if (n == 0 || x == 0)
		return 1.0f;
	if (n == 1)
		return 1.0f + x;
	if (x == -1.0f)
		return n < 0 ? math_range_error() : 0.0f;
	if (n == 2 || n == 3)
	{
		const double base = 1.0 + (double)x;
		const double square = base * base;
		return narrow_float_power(n == 2 ? square : square * base);
	}
	const float result = (float)exp(log1p((double)x) * (double)n);
	if (isinf(result) && isfinite(x))
		errno = ERANGE;
	return result;
}

long double rootnl(long double x, long long n)
{
	const bool odd = (n & 1) != 0;
	if (n == 0 || (x < 0 && !odd))
		return math_domain_error();
	if (n == 1 || isnan(x))
		return x;

	const long double magnitude = __builtin_fabsl(x);
	long double result;
	if (magnitude == 0)
		result = n < 0 ? math_range_error() : 0.0L;
	else if (isinf(magnitude))
		result = n < 0 ? 0.0L : magnitude;
	else if (n == -1)
		result = math_quad_overflow(1.0L / magnitude);
	else if (n == 2)
		result = sqrtl(magnitude);
	else
	{
		const long double reciprocal = 1.0L / (long double)n;
		const long double tail = __builtin_fmal(-reciprocal, n, 1.0L) * reciprocal;
		result = power_from_log(__cppgm_wasi_log_split(magnitude, 0.0L), reciprocal, tail);
	}
	return odd ? __builtin_copysignl(result, x) : result;
}

double rootn(double x, long long n)
{
	if (n == 1)
		return x;
	if (n == -1)
	{
		const double result = 1.0 / x;
		if (isinf(result) && isfinite(x))
			errno = ERANGE;
		return result;
	}
	if (n == 2)
	{
		if (x < 0)
			return math_domain_error();
		return __builtin_sqrt(__builtin_fabs(x));
	}
	return narrow_double_power(rootnl(x, n));
}

float rootnf(float x, long long n)
{
	const bool odd = (n & 1) != 0;
	if (n == 0 || (x < 0 && !odd))
		return math_domain_error();
	if (n == 1 || isnan(x))
		return x;
	const double magnitude = __builtin_fabs((double)x);
	const double result = checked_double_power(magnitude, 1.0 / (double)n);
	return narrow_float_power(odd ? __builtin_copysign(result, (double)x) : result);
}
