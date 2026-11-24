#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>

typedef unsigned _BitInt(128) uint128;

static_assert(FE_TONEAREST == 0 && FE_ALL_EXCEPT == 0);
static_assert(sizeof(float) == 4 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128);
static_assert(sizeof(double) == 8 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024);
static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

// Scale normal results by updating the exponent. Round subnormals once,
// using the discarded bits of the original significand.
#define DEFINE_SCALE(type, name, word, digits, max_exp) \
	type name(type x, int n) \
	{ \
		enum \
		{ \
			fraction_bits = digits - 1, \
			exponent_mask = 2 * max_exp - 1 \
		}; \
		const word hidden = (word)1 << fraction_bits; \
		const word sign_mask = (word)1 << (sizeof(word) * CHAR_BIT - 1); \
		union \
		{ \
			type value; \
			word bits; \
		} number = { .value = x }; \
		const unsigned encoded = (number.bits >> fraction_bits) & exponent_mask; \
		const unsigned offset = encoded - 1; \
		if (__builtin_expect((offset | (offset + (unsigned)n)) < exponent_mask - 1, 1)) \
		{ \
			number.bits += (word)n << fraction_bits; \
			return number.value; \
		} \
		const word sign = number.bits & sign_mask; \
		int64_t exponent = encoded; \
		if (__builtin_expect(exponent == 0, 0)) \
		{ \
			if ((number.bits ^ sign) == 0) \
				return x; \
			number.value = x * (type)hidden; \
			exponent = (int64_t)((number.bits >> fraction_bits) & exponent_mask) - fraction_bits; \
		} \
		else if (__builtin_expect(exponent == exponent_mask, 0)) \
			return x + x; \
		exponent += n; \
		const word fraction = number.bits & (hidden - 1); \
		if (__builtin_expect(exponent >= exponent_mask, 0)) \
		{ \
			errno = ERANGE; \
			number.bits = sign | ((word)exponent_mask << fraction_bits); \
		} \
		else if (__builtin_expect(exponent > 0, 1)) \
			number.bits = sign | ((word)exponent << fraction_bits) | fraction; \
		else if (exponent < -fraction_bits) \
			number.bits = sign; \
		else \
		{ \
			const unsigned shift = 1 - exponent; \
			const word significand = hidden | fraction; \
			const word half = (word)1 << (shift - 1); \
			const word discarded = significand & (2 * half - 1); \
			word rounded = significand >> shift; \
			rounded += discarded > half || (discarded == half && (rounded & 1)); \
			number.bits = sign | rounded; \
		} \
		return number.value; \
	}

DEFINE_SCALE(float, scalbnf, uint32_t, FLT_MANT_DIG, FLT_MAX_EXP)
DEFINE_SCALE(double, scalbn, uint64_t, DBL_MANT_DIG, DBL_MAX_EXP)
DEFINE_SCALE(long double, scalbnl, uint128, LDBL_MANT_DIG, LDBL_MAX_EXP)
