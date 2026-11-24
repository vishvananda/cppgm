/*
 * Copyright (c) 2018, Arm Limited.
 * SPDX-License-Identifier: MIT
 *
 * Adapted from WASI SDK 34 libc's exp.c and exp_data.h for fixed
 * nearest-even rounding. Use the SDK's existing reduction table.
 */
#include <float.h>
#include <stdint.h>

#include "math_error.h"

static_assert(FLT_EVAL_METHOD == 0 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024);

enum
{
	exponent_bits = 52,
	table_bits = 7,
	table_size = 1 << table_bits
};

// Keep the type compatible with the declaration in the SDK's exp_data.h.
extern __attribute__((visibility("hidden"))) const struct exp_data
{
	double invln2N;
	double shift;
	double negln2hiN;
	double negln2loN;
	double poly[4];
	double exp2_shift;
	double exp2_poly[5];
	uint64_t tab[2 * table_size];
} __exp_data;

union binary64
{
	double value;
	uint64_t bits;
};

static inline uint64_t binary64_bits(double x)
{
	return (union binary64){ .value = x }.bits;
}

static inline double as_binary64(uint64_t bits)
{
	return (union binary64){ .bits = bits }.value;
}

static double scale_edge(double correction, uint64_t bits, uint64_t step_bits)
{
	if ((step_bits & UINT64_C(0x80000000)) == 0)
	{
		const double scale = as_binary64(bits - (UINT64_C(1009) << exponent_bits));
		const double result = 0x1p1009 * (scale + scale * correction);
		if (result == INFINITY)
			errno = ERANGE;
		return result;
	}

	const double scale = as_binary64(bits + (UINT64_C(1022) << exponent_bits));
	double result = scale + scale * correction;
	if (result < 1.0)
	{
		// Round at subnormal spacing before scaling down.
		const double high = 1.0 + result;
		const double low = (1.0 - high + result) + (scale - result + scale * correction);
		result = (high + low) - 1.0;
	}
	return 0x1p-1022 * result;
}

double exp(double x)
{
	const uint64_t bits = binary64_bits(x);
	const unsigned exponent = (bits >> exponent_bits) & 0x7ff;
	const unsigned tiny = 1023 - 54;
	const unsigned edge = 1023 + 9;
	const bool ordinary = exponent - tiny < edge - tiny;
	if (!ordinary)
	{
		if (exponent < tiny)
			return 1.0;
		if (exponent >= 1023 + 10)
		{
			if (bits == binary64_bits(-INFINITY))
				return 0.0;
			if (exponent == 0x7ff)
				return 1.0 + x;
			return bits >> 63 ? 0.0 : math_range_error();
		}
	}

	// Represent the rounded reduction step as an integer in the low
	// significand bits of the shifted value.
	const double shifted = x * __exp_data.invln2N + __exp_data.shift;
	const uint64_t step_bits = binary64_bits(shifted);
	const double step = shifted - __exp_data.shift;
	const double r = x + step * __exp_data.negln2hiN + step * __exp_data.negln2loN;
	const unsigned index = 2 * (step_bits % table_size);
	const uint64_t scale_bits = __exp_data.tab[index + 1] + (step_bits << (exponent_bits - table_bits));
	const double square = r * r;
	const double* poly = __exp_data.poly;
	const double correction = as_binary64(__exp_data.tab[index]) + r + square * (poly[0] + r * poly[1]) +
		square * square * (poly[2] + r * poly[3]);
	if (!ordinary)
		return scale_edge(correction, scale_bits, step_bits);
	const double scale = as_binary64(scale_bits);
	return scale + scale * correction;
}
