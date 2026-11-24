#ifndef CPPGM_WASI_MATH_FLOAT_ROUND_H
#define CPPGM_WASI_MATH_FLOAT_ROUND_H

#include <float.h>
#include <stdint.h>

static_assert(sizeof(float) == 4 && FLT_MANT_DIG == 24 && FLT_MIN_EXP == -125 && FLT_MAX_EXP == 128);
static_assert(sizeof(double) == 8 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024 && FLT_EVAL_METHOD == 0);

enum
{
	binary64_fraction_bits = DBL_MANT_DIG - 1,
	binary64_bias = DBL_MAX_EXP - 1,
	float_fraction_drop = DBL_MANT_DIG - FLT_MANT_DIG,
	float_min_normal = binary64_bias + FLT_MIN_EXP - 1,
	float_min_midpoint = float_min_normal - FLT_MANT_DIG
};

union binary64
{
	double value;
	uint64_t bits;
};

static inline bool float_normal_midpoint(uint64_t word)
{
	const uint64_t halfway = UINT64_C(1) << (float_fraction_drop - 1);
	return (word & (2 * halfway - 1)) == halfway;
}

// A float subnormal has the same spacing throughout its binade range.
static inline bool float_midpoint(uint64_t word, unsigned exponent)
{
	if (exponent >= float_min_normal)
		return float_normal_midpoint(word);
	if (exponent < float_min_midpoint)
		return false;
	const unsigned shift = float_fraction_drop + float_min_normal - exponent;
	const uint64_t halfway = UINT64_C(1) << (shift - 1);
	const uint64_t implicit_bit = UINT64_C(1) << binary64_fraction_bits;
	const uint64_t significand = (word & (implicit_bit - 1)) | implicit_bit;
	return (significand & (2 * halfway - 1)) == halfway;
}

#endif
