#include <fenv.h>
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "math_error.h"

/* In this SDK, nearbyint uses nearest-even and there are no exception flags. */
static_assert(FE_ALL_EXCEPT == 0);
static_assert(FLT_RADIX == 2 && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);
static_assert(FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 && sizeof(float) == 4);
static_assert(DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024 && sizeof(double) == 8);
static_assert(LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384 && sizeof(long double) == 16);

static float power_of_twof(unsigned exponent)
{
	const uint32_t bits = (uint32_t)(exponent + FLT_MAX_EXP - 1) << (FLT_MANT_DIG - 1);
	float value;
	memcpy(&value, &bits, sizeof value);
	return value;
}

static double power_of_two(unsigned exponent)
{
	const uint64_t bits = (uint64_t)(exponent + DBL_MAX_EXP - 1) << (DBL_MANT_DIG - 1);
	double value;
	memcpy(&value, &bits, sizeof value);
	return value;
}

static long double power_of_twol(unsigned exponent)
{
	const uint64_t words[] = { 0, (uint64_t)(exponent + LDBL_MAX_EXP - 1) << (LDBL_MANT_DIG - 65) };
	long double value;
	memcpy(&value, words, sizeof value);
	return value;
}

/* Compare against the first excluded positive integer. Its power-of-two
   bound is exactly representable even when 2^n - 1 would round up. */
#define DEFINE_ROUNDING(type, suffix, max_exponent, largest) \
	type roundeven##suffix(type value) \
	{ \
		return __builtin_nearbyint##suffix(value); \
	} \
	static type rounded_##suffix(type value, int direction) \
	{ \
		switch (direction) \
		{ \
		case FP_INT_UPWARD: \
			return __builtin_ceil##suffix(value); \
		case FP_INT_DOWNWARD: \
			return __builtin_floor##suffix(value); \
		case FP_INT_TONEARESTFROMZERO: \
			return __builtin_round##suffix(value); \
		case FP_INT_TONEAREST: \
			return roundeven##suffix(value); \
		default: \
			return __builtin_trunc##suffix(value); \
		} \
	} \
	static type convert_##suffix(type value, int direction, unsigned width, bool signed_range) \
	{ \
		if (width != 0 && __builtin_fabs##suffix(value) <= largest) \
		{ \
			const type result = rounded_##suffix(value, direction); \
			if (signed_range || result >= 0) \
			{ \
				const unsigned exponent = width - signed_range; \
				if (exponent >= max_exponent) \
					return result; \
				const type bound = power_of_two##suffix(exponent); \
				if (result < bound && (!signed_range || result >= -bound)) \
					return result; \
			} \
		} \
		return (type)math_domain_error(); \
	} \
	type fromfp##suffix(type value, int direction, unsigned width) \
	{ \
		return convert_##suffix(value, direction, width, true); \
	} \
	type ufromfp##suffix(type value, int direction, unsigned width) \
	{ \
		return convert_##suffix(value, direction, width, false); \
	} \
	type fromfpx##suffix(type value, int direction, unsigned width) \
	{ \
		return fromfp##suffix(value, direction, width); \
	} \
	type ufromfpx##suffix(type value, int direction, unsigned width) \
	{ \
		return ufromfp##suffix(value, direction, width); \
	}

DEFINE_ROUNDING(float, f, FLT_MAX_EXP, FLT_MAX)
DEFINE_ROUNDING(double, , DBL_MAX_EXP, DBL_MAX)
DEFINE_ROUNDING(long double, l, LDBL_MAX_EXP, LDBL_MAX)
