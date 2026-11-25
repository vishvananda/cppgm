#include <float.h>
#include <limits.h>
#include <stdint.h>

#include "math_error.h"

static_assert(sizeof(float) == 4 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128);
static_assert(sizeof(double) == 8 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024);
static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

#define DEFINE_REMAINDER_FORMAT(type, word, suffix, digits, max_exp, top_bit) \
	union encoding##suffix \
	{ \
		type value; \
		word bits; \
	}; \
\
	struct mantissa##suffix \
	{ \
		word value; \
		int exponent; \
	}; \
\
	enum \
	{ \
		fraction_bits##suffix = digits - 1, \
		word_bits##suffix = sizeof(word) * CHAR_BIT \
	}; \
\
	static const word implicit_bit##suffix = (word)1 << fraction_bits##suffix; \
	static const word sign_bit##suffix = (word)1 << (word_bits##suffix - 1); \
	static const word infinity_bits##suffix = (word)(2 * max_exp - 1) << fraction_bits##suffix; \
\
	static unsigned normalization_shift##suffix(word mantissa) \
	{ \
		return fraction_bits##suffix - top_bit(mantissa); \
	} \
\
	static struct mantissa##suffix unpack##suffix(word magnitude) \
	{ \
		const int exponent = magnitude >> fraction_bits##suffix; \
		const word leading = implicit_bit##suffix; \
		if (exponent != 0) \
			return (struct mantissa##suffix){ (magnitude & (leading - 1)) | leading, exponent }; \
		const unsigned shift = normalization_shift##suffix(magnitude); \
		return (struct mantissa##suffix){ magnitude << shift, 1 - (int)shift }; \
	} \
\
	static type pack##suffix(word mantissa, int exponent, word sign) \
	{ \
		if (mantissa != 0) \
		{ \
			const unsigned shift = normalization_shift##suffix(mantissa); \
			mantissa <<= shift; \
			exponent -= (int)shift; \
			if (exponent > 0) \
				mantissa = (mantissa & (implicit_bit##suffix - 1)) | ((word)exponent << fraction_bits##suffix); \
			else \
				mantissa >>= 1 - exponent; \
		} \
		return (union encoding##suffix){ .bits = sign | mantissa }.value; \
	}

#define DEFINE_REMAINDER_REDUCTION(word, suffix, digits, scalar_division) \
	struct reduction##suffix \
	{ \
		word rest; \
		unsigned quotient; \
	}; \
\
	static inline __attribute__((always_inline)) struct reduction##suffix reduce##suffix( \
		word rest, word divisor, int distance, bool nearest) \
	{ \
		unsigned low_bits = 0; \
		if (scalar_division) \
		{ \
			if (distance == 0) \
			{ \
				if (rest >= divisor) \
				{ \
					rest -= divisor; \
					low_bits = 1; \
				} \
				return (struct reduction##suffix){ rest, low_bits }; \
			} \
			/* Append a quotient chunk using the integer word's spare bits. */ \
			const unsigned chunk = word_bits##suffix - digits; \
			while (distance != 0 && rest != 0) \
			{ \
				const unsigned step = (unsigned)distance < chunk ? (unsigned)distance : chunk; \
				const word shifted = rest << step; \
				if (nearest) \
				{ \
					const word part = shifted / divisor; \
					rest = shifted - part * divisor; \
					low_bits = (low_bits << step) | (unsigned)part; \
				} \
				else \
					rest = shifted % divisor; \
				distance -= step; \
			} \
			low_bits <<= distance < 3 ? distance : 3; \
		} \
		else \
		{ \
			/* Binary128 division is software. Use one bounded shift and \
		   subtraction per quotient bit. */ \
			for (;; --distance) \
			{ \
				low_bits <<= 1; \
				if (rest >= divisor) \
				{ \
					rest -= divisor; \
					low_bits |= 1U; \
				} \
				if (distance == 0) \
					break; \
				if (rest == 0) \
				{ \
					low_bits <<= distance < 3 ? distance : 3; \
					break; \
				} \
				rest <<= 1; \
			} \
		} \
		return (struct reduction##suffix){ rest, low_bits }; \
	}

#define DEFINE_REMAINDER_FUNCTIONS(type, word, suffix) \
	static inline __attribute__((always_inline)) type compute_remainder##suffix( \
		type x, type y, int* quotient, bool nearest) \
	{ \
		const word dividend = (union encoding##suffix){ .value = x }.bits; \
		const word divisor = (union encoding##suffix){ .value = y }.bits; \
		const word sign_mask = sign_bit##suffix; \
		const word abs_x = dividend & (sign_mask - 1); \
		const word abs_y = divisor & (sign_mask - 1); \
		const word infinity = infinity_bits##suffix; \
		if (quotient) \
			*quotient = 0; \
		if (abs_x > infinity || abs_y > infinity) \
			return x + y; \
		if (abs_x == infinity || abs_y == 0) \
			return math_domain_error(); \
		if (abs_x == 0 || abs_y == infinity || (!nearest && abs_x < abs_y)) \
			return x; \
\
		const struct mantissa##suffix a = unpack##suffix(abs_x); \
		const struct mantissa##suffix b = unpack##suffix(abs_y); \
		const int distance = a.exponent - b.exponent; \
		if (distance < -1) \
			return x; \
		word rest; \
		word sign = dividend & sign_mask; \
		int exponent; \
		unsigned low_bits; \
		if (distance < 0) \
		{ \
			/* With x below y, the nearest quotient is zero or one. */ \
			if (a.value <= b.value) \
				return x; \
			rest = (b.value << 1) - a.value; \
			sign ^= sign_mask; \
			exponent = a.exponent; \
			low_bits = 1; \
		} \
		else \
		{ \
			const struct reduction##suffix reduced = reduce##suffix(a.value, b.value, distance, nearest); \
			rest = reduced.rest; \
			exponent = b.exponent; \
			low_bits = reduced.quotient; \
			const word twice = rest << 1; \
			if (nearest && (twice > b.value || (twice == b.value && (low_bits & 1U)))) \
			{ \
				rest = b.value - rest; \
				sign ^= sign_mask; \
				++low_bits; \
			} \
		} \
		if (quotient) \
		{ \
			const int magnitude = (int)(low_bits & 7U); \
			*quotient = ((dividend ^ divisor) & sign_mask) != 0 ? -magnitude : magnitude; \
		} \
		return pack##suffix(rest, exponent, sign); \
	} \
\
	type fmod##suffix(type x, type y) \
	{ \
		return compute_remainder##suffix(x, y, nullptr, false); \
	} \
\
	type remainder##suffix(type x, type y) \
	{ \
		return compute_remainder##suffix(x, y, nullptr, true); \
	} \
\
	type remquo##suffix(type x, type y, int* quotient) \
	{ \
		return compute_remainder##suffix(x, y, quotient, true); \
	}

typedef unsigned _BitInt(128) uint128;

static unsigned top_bit_quad(uint128 mantissa)
{
	const uint64_t high = mantissa >> 64;
	return high != 0 ? 127 - __builtin_clzll(high) : 63 - __builtin_clzll((uint64_t)mantissa);
}

#define top_bit_float(mantissa) (31 - __builtin_clz(mantissa))
#define top_bit_double(mantissa) (63 - __builtin_clzll(mantissa))

DEFINE_REMAINDER_FORMAT(float, uint32_t, f, FLT_MANT_DIG, FLT_MAX_EXP, top_bit_float)
DEFINE_REMAINDER_FORMAT(double, uint64_t, , DBL_MANT_DIG, DBL_MAX_EXP, top_bit_double)
DEFINE_REMAINDER_FORMAT(long double, uint128, l, LDBL_MANT_DIG, LDBL_MAX_EXP, top_bit_quad)

DEFINE_REMAINDER_REDUCTION(uint32_t, f, FLT_MANT_DIG, true)
DEFINE_REMAINDER_REDUCTION(uint64_t, , DBL_MANT_DIG, true)
DEFINE_REMAINDER_REDUCTION(uint128, l, LDBL_MANT_DIG, false)

DEFINE_REMAINDER_FUNCTIONS(float, uint32_t, f)
DEFINE_REMAINDER_FUNCTIONS(double, uint64_t, )
DEFINE_REMAINDER_FUNCTIONS(long double, uint128, l)
