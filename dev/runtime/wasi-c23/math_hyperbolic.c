// The reductions follow the WASI SDK 34 acosh and atanh kernels.
#include <float.h>
#include <stdint.h>

#include "math_error.h"

static_assert(FLT_EVAL_METHOD == 0 && FLT_MANT_DIG == 24 && DBL_MANT_DIG == 53 && LDBL_MANT_DIG == 113);
static_assert(LDBL_MAX_EXP == 16384 && sizeof(long double) == 16 && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

// Use log1p near one, where forming x + sqrt(x*x - 1) loses precision.
// For large x the correction to log(x) + log(2) is below rounding scale.
#define DEFINE_ACOSH(type, suffix, large, ln2) \
	type acosh##suffix(type x) \
	{ \
		if (x < 2) \
		{ \
			if (x < 1) \
				return math_domain_error(); \
			const type delta = x - 1; \
			return log1p##suffix(delta + __builtin_sqrt##suffix(delta * delta + 2 * delta)); \
		} \
		if (x < large) \
			return log##suffix(2 * x - 1 / (x + __builtin_sqrt##suffix(x * x - 1))); \
		return log##suffix(x) + ln2; \
	}

DEFINE_ACOSH(float, f, 0x1p12f, 0.693147180559945309417232121458176568f)
DEFINE_ACOSH(double, , 0x1p26, 0.693147180559945309417232121458176568)

union binary128
{
	long double value;
	uint64_t words[2];
};

long double acoshl(long double x)
{
	const union binary128 input = { .value = x };
	const uint64_t high = input.words[1];
	if (high < UINT64_C(0x4000000000000000))
	{
		if (high < UINT64_C(0x3fff000000000000))
			return math_domain_error();
		const long double delta = x - 1.0L;
		return log1pl(delta + sqrtl(delta * delta + 2.0L * delta));
	}
	if (high < UINT64_C(0x4037000000000000))
		return logl(x + sqrtl(x * x - 1.0L));
	if (high >> 63)
	{
		const uint64_t infinity = UINT64_C(0xffff000000000000);
		return high > infinity || (high == infinity && input.words[0] != 0) ? x + x : math_domain_error();
	}
	return logl(x) + 0.693147180559945309417232121458176568L;
}

#define DEFINE_ATANH(type, suffix, word, digits, max_exp) \
	type atanh##suffix(type x) \
	{ \
		const word sign_mask = (word)1 << (sizeof(word) * 8 - 1); \
		union \
		{ \
			type value; \
			word bits; \
		} input = { .value = x }; \
		const word sign = input.bits & sign_mask; \
		const word magnitude = input.bits ^ sign; \
		const unsigned exponent = magnitude >> (digits - 1); \
		input.bits = magnitude; \
		const type y = input.value; \
		if (exponent < max_exp - 2) \
		{ \
			if (exponent < max_exp - 1 - 32) \
				return x; \
			input.value = (type)0.5 * log1p##suffix(2 * y + 2 * y * y / (1 - y)); \
		} \
		else \
		{ \
			if (exponent >= max_exp - 1) \
			{ \
				const word infinity = (word)(2 * max_exp - 1) << (digits - 1); \
				if (magnitude == (word)(max_exp - 1) << (digits - 1)) \
				{ \
					errno = ERANGE; \
					input.bits = sign | infinity; \
					return input.value; \
				} \
				return magnitude > infinity ? x + x : math_domain_error(); \
			} \
			input.value = (type)0.5 * log1p##suffix(2 * (y / (1 - y))); \
		} \
		input.bits |= sign; \
		return input.value; \
	}

DEFINE_ATANH(float, f, uint32_t, FLT_MANT_DIG, FLT_MAX_EXP)
DEFINE_ATANH(double, , uint64_t, DBL_MANT_DIG, DBL_MAX_EXP)

long double atanhl(long double x)
{
	union binary128 input = { .value = x };
	const uint64_t sign = input.words[1] & UINT64_C(0x8000000000000000);
	const uint64_t magnitude = input.words[1] ^ sign;
	const unsigned exponent = magnitude >> 48;
	if (exponent < 0x3fff - 57)
		return x;
	if (exponent >= 0x3fff)
	{
		if (magnitude == UINT64_C(0x3fff000000000000) && input.words[0] == 0)
		{
			errno = ERANGE;
			input.words[1] = sign | UINT64_C(0x7fff000000000000);
			return input.value;
		}
		if (exponent == 0x7fff && ((magnitude << 16) | input.words[0]) != 0)
			return x + x;
		return math_domain_error();
	}

	input.words[1] = magnitude;
	const long double y = input.value;
	const long double twice = 2.0L * y;
	const long double argument = exponent < 0x3fff - 1 ? twice + twice * y / (1.0L - y) : 2.0L * (y / (1.0L - y));
	input.value = 0.5L * log1pl(argument);
	input.words[1] |= sign;
	return input.value;
}
