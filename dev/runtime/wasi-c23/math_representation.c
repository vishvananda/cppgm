#include <float.h>
#include <limits.h>
#include <stdint.h>

#include "math_error.h"

typedef unsigned _BitInt(128) uint128;

static_assert(sizeof(float) == 4 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128);
static_assert(sizeof(double) == 8 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024);
static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

// Each call moves at most one encoding. Only the functions with a target
// argument report a step beyond the largest finite magnitude as overflow.
#define DEFINE_STEPPING(type, word, suffix, mantissa, max_exp) \
	union next_bits_##suffix \
	{ \
		type value; \
		word bits; \
	}; \
	static const word next_sign_##suffix = (word)1 << (sizeof(word) * CHAR_BIT - 1); \
	static const word next_inf_##suffix = (word)(2 * max_exp - 1) << (mantissa - 1); \
	static inline type next_step_##suffix(word bits, bool upward, bool report) \
	{ \
		const word magnitude = bits & ~next_sign_##suffix; \
		const bool negative = bits != magnitude; \
		if (magnitude == 0) \
			bits = (upward ? 0 : next_sign_##suffix) | 1; \
		else if (upward == negative) \
			--bits; \
		else if (report || magnitude < next_inf_##suffix) \
		{ \
			++bits; \
			if (report && magnitude == next_inf_##suffix - 1) \
				errno = ERANGE; \
		} \
		return (union next_bits_##suffix){ .bits = bits }.value; \
	} \
	type nextup##suffix(type x) \
	{ \
		const word bits = (union next_bits_##suffix){ .value = x }.bits; \
		return (bits & ~next_sign_##suffix) > next_inf_##suffix ? x + x : next_step_##suffix(bits, true, false); \
	} \
	type nextdown##suffix(type x) \
	{ \
		const word bits = (union next_bits_##suffix){ .value = x }.bits; \
		return (bits & ~next_sign_##suffix) > next_inf_##suffix ? x + x : next_step_##suffix(bits, false, false); \
	}

DEFINE_STEPPING(float, uint32_t, f, FLT_MANT_DIG, FLT_MAX_EXP)
DEFINE_STEPPING(double, uint64_t, , DBL_MANT_DIG, DBL_MAX_EXP)
DEFINE_STEPPING(long double, uint128, l, LDBL_MANT_DIG, LDBL_MAX_EXP)

// The scalar formats have hardware comparison instructions on Wasm.
#define DEFINE_SCALAR_AFTER(type, word, suffix) \
	type nextafter##suffix(type x, type y) \
	{ \
		if (x == y) \
			return y; \
		if (isnan(x) || isnan(y)) \
			return x + y; \
		const word bits = (union next_bits_##suffix){ .value = x }.bits; \
		return next_step_##suffix(bits, x < y, true); \
	}

DEFINE_SCALAR_AFTER(float, uint32_t, f)
DEFINE_SCALAR_AFTER(double, uint64_t, )

// Compare and step in the encoding to avoid software binary128 comparisons.
long double nextafterl(long double x, long double y)
{
	const uint128 from = (union next_bits_l){ .value = x }.bits;
	const uint128 to = (union next_bits_l){ .value = y }.bits;
	const uint128 from_magnitude = from & ~next_sign_l;
	const uint128 to_magnitude = to & ~next_sign_l;
	if (from_magnitude > next_inf_l || to_magnitude > next_inf_l)
		return x + y;
	if (from == to || (from_magnitude | to_magnitude) == 0)
		return y;
	if (from_magnitude == 0)
		return (union next_bits_l){ .bits = (to & next_sign_l) | 1 }.value;
	if (((from ^ to) & next_sign_l) || from_magnitude > to_magnitude)
		return (union next_bits_l){ .bits = from - 1 }.value;
	if (from_magnitude == next_inf_l - 1)
		errno = ERANGE;
	return (union next_bits_l){ .bits = from + 1 }.value;
}

#define DEFINE_TOWARD(type, word, suffix) \
	type nexttoward##suffix(type x, long double y) \
	{ \
		const word bits = (union next_bits_##suffix){ .value = x }.bits; \
		const long double wide = x; \
		if (wide < y) \
			return next_step_##suffix(bits, true, true); \
		if (wide > y) \
			return next_step_##suffix(bits, false, true); \
		return wide == y ? (type)y : (type)(wide + y); \
	}

DEFINE_TOWARD(float, uint32_t, f)
DEFINE_TOWARD(double, uint64_t, )

long double nexttowardl(long double x, long double y)
{
	return nextafterl(x, y);
}
