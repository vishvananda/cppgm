#include <float.h>
#include <limits.h>
#include <stdint.h>

#include "math_error.h"

typedef unsigned _BitInt(128) uint128;

static_assert(sizeof(float) == 4 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128);
static_assert(sizeof(double) == 8 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024);
static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);
static_assert(INT_MAX == LONG_MAX && INT_MIN == LONG_MIN);

static inline int top_bit_quad(uint128 fraction)
{
	const uint64_t high = fraction >> 64;
	return high != 0 ? 127 - __builtin_clzll(high) : 63 - __builtin_clzll((uint64_t)fraction);
}

#define top_bit_float(fraction) (31 - __builtin_clz(fraction))
#define top_bit_double(fraction) (63 - __builtin_clzll(fraction))

// Normal exponents are a bit extraction and a single range test. Subnormal
// exponents use the leading fraction bit and the format's minimum spacing.
#define DEFINE_EXPONENTS(type, word, suffix, max_exp, digits, top_bit) \
	union exponent_bits##suffix \
	{ \
		type value; \
		word bits; \
	}; \
\
	enum \
	{ \
		exponent_max##suffix = 2 * max_exp - 1, \
		exponent_bias##suffix = max_exp - 1, \
		exponent_fraction##suffix = digits - 1 \
	}; \
\
	int ilogb##suffix(type x) \
	{ \
		const word bits = (union exponent_bits##suffix){ .value = x }.bits; \
		const unsigned exponent = (bits >> exponent_fraction##suffix) & exponent_max##suffix; \
		if (exponent - 1 < exponent_max##suffix - 1) \
			return (int)exponent - exponent_bias##suffix; \
		const word fraction = bits & (((word)1 << exponent_fraction##suffix) - 1); \
		if (exponent == 0 && fraction != 0) \
			return 1 - exponent_bias##suffix - exponent_fraction##suffix + top_bit(fraction); \
		errno = EDOM; \
		return exponent == 0 ? FP_ILOGB0 : fraction == 0 ? INT_MAX : FP_ILOGBNAN; \
	} \
\
	long llogb##suffix(type x) \
	{ \
		return ilogb##suffix(x); \
	} \
\
	type logb##suffix(type x) \
	{ \
		const word bits = (union exponent_bits##suffix){ .value = x }.bits; \
		const unsigned exponent = (bits >> exponent_fraction##suffix) & exponent_max##suffix; \
		if (exponent - 1 < exponent_max##suffix - 1) \
			return (int)exponent - exponent_bias##suffix; \
		const word fraction = bits & (((word)1 << exponent_fraction##suffix) - 1); \
		if (exponent != 0) \
			return fraction == 0 ? (type)INFINITY : x + x; \
		if (fraction != 0) \
			return 1 - exponent_bias##suffix - exponent_fraction##suffix + top_bit(fraction); \
		return -math_range_error(); \
	}

DEFINE_EXPONENTS(float, uint32_t, f, FLT_MAX_EXP, FLT_MANT_DIG, top_bit_float)
DEFINE_EXPONENTS(double, uint64_t, , DBL_MAX_EXP, DBL_MANT_DIG, top_bit_double)
DEFINE_EXPONENTS(long double, uint128, l, LDBL_MAX_EXP, LDBL_MANT_DIG, top_bit_quad)
