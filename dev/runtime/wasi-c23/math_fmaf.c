#include "math_error.h"
#include "math_float_round.h"

// A binary32 product is exact in binary64. At a binary32 midpoint,
// recover which side of the midpoint the unrounded sum was on.
static double correct_midpoint(double rounded, double product, double addend)
{
	const bool product_larger = __builtin_fabs(product) >= __builtin_fabs(addend);
	const double high = product_larger ? product : addend;
	const double low = product_larger ? addend : product;
	const double tail = (high - rounded) + low;
	union binary64 corrected = { .value = rounded };
	if (tail != 0)
		corrected.bits += (tail < 0) == (corrected.bits >> 63) ? 1 : -1;
	return corrected.value;
}

static __attribute__((noinline)) float finish_extreme(double rounded, uint64_t magnitude, double product, double addend)
{
	const unsigned exponent = magnitude >> binary64_fraction_bits;
	if (exponent == 2 * DBL_MAX_EXP - 1)
		return (float)rounded;
	if (float_midpoint(magnitude, exponent))
		rounded = correct_midpoint(rounded, product, addend);
	const float result = (float)rounded;
	if (__builtin_isinf(result))
		errno = ERANGE;
	return result;
}

float fmaf(float x, float y, float z)
{
	const double product = (double)x * y;
	const union binary64 sum = { .value = product + z };
	const uint64_t magnitude = sum.bits & UINT64_C(0x7fffffffffffffff);
	const uint64_t lower = (uint64_t)float_min_normal << binary64_fraction_bits;
	// Keep subnormal rounding and possible overflow off the ordinary path.
	const uint64_t upper = (uint64_t)(binary64_bias + FLT_MAX_EXP - 1) << binary64_fraction_bits;
	if (magnitude - lower >= upper - lower)
		return finish_extreme(sum.value, magnitude, product, z);
	return (float)(float_normal_midpoint(sum.bits) ? correct_midpoint(sum.value, product, z) : sum.value);
}
