/*
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 *
 * Adapted from the FreeBSD msun sin, cos, tan, asin and acos implementations
 * in WASI SDK 34. Use the SDK's circular kernels and angle reduction.
 */
#include <float.h>
#include <stdint.h>

#include "math_error.h"

static_assert(sizeof(double) == 8 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024 && FLT_EVAL_METHOD == 0);

__attribute__((visibility("hidden"))) double __sin(double, double, int);
__attribute__((visibility("hidden"))) double __cos(double, double);
__attribute__((visibility("hidden"))) double __tan(double, double, int);
__attribute__((visibility("hidden"))) int __rem_pio2(double, double*);

union binary64
{
	double value;
	uint64_t bits;
};

static const uint64_t infinity_bits = UINT64_C(0x7ff0000000000000);
static const uint64_t one_bits = UINT64_C(0x3ff0000000000000);
static const double half_pi = 0x1.921fb54442d18p+0;
static const double half_pi_tail = 6.12323399573676603587e-17;

static inline uint64_t magnitude_bits(double x)
{
	return (union binary64){ .value = x }.bits & UINT64_C(0x7fffffffffffffff);
}

static inline double invalid_angle(double x, uint64_t magnitude)
{
	return magnitude > infinity_bits ? x + x : math_domain_error();
}

static inline double sine_in_quadrant(const double angle[2], unsigned quadrant)
{
	switch (quadrant & 3U)
	{
	case 0:
		return __sin(angle[0], angle[1], 1);
	case 1:
		return __cos(angle[0], angle[1]);
	case 2:
		return -__sin(angle[0], angle[1], 1);
	default:
		return -__cos(angle[0], angle[1]);
	}
}

double sin(double x)
{
	const uint64_t magnitude = magnitude_bits(x);
	const uint32_t high = magnitude >> 32;
	if (high <= 0x3fe921fb)
		return high < 0x3e500000 ? x : __sin(x, 0.0, 0);
	if (high >= 0x7ff00000)
		return invalid_angle(x, magnitude);
	double angle[2];
	const unsigned quadrant = __rem_pio2(x, angle);
	return sine_in_quadrant(angle, quadrant);
}

double cos(double x)
{
	const uint64_t magnitude = magnitude_bits(x);
	const uint32_t high = magnitude >> 32;
	if (high <= 0x3fe921fb)
		return high < 0x3e46a09e ? 1.0 : __cos(x, 0.0);
	if (high >= 0x7ff00000)
		return invalid_angle(x, magnitude);
	double angle[2];
	const unsigned quadrant = __rem_pio2(x, angle);
	return sine_in_quadrant(angle, quadrant + 1);
}

double tan(double x)
{
	const uint64_t magnitude = magnitude_bits(x);
	const uint32_t high = magnitude >> 32;
	if (high <= 0x3fe921fb)
		return high < 0x3e400000 ? x : __tan(x, 0.0, 0);
	if (high >= 0x7ff00000)
		return invalid_angle(x, magnitude);
	double angle[2];
	const unsigned quadrant = __rem_pio2(x, angle);
	return __tan(angle[0], angle[1], quadrant & 1U);
}

// R(z) approximates (asin(sqrt(z)) - sqrt(z)) / sqrt(z) for 0 <= z <= 1/4.
static inline double asin_correction(double z)
{
	const double p0 = 1.66666666666666657415e-01;
	const double p1 = -3.25565818622400915405e-01;
	const double p2 = 2.01212532134862925881e-01;
	const double p3 = -4.00555345006794114027e-02;
	const double p4 = 7.91534994289814532176e-04;
	const double p5 = 3.47933107596021167570e-05;
	const double q1 = -2.40339491173441421878e+00;
	const double q2 = 2.02094576023350569471e+00;
	const double q3 = -6.88283971605453293030e-01;
	const double q4 = 7.70381505559019352791e-02;
	const double numerator = z * (p0 + z * (p1 + z * (p2 + z * (p3 + z * (p4 + z * p5)))));
	const double denominator = 1.0 + z * (q1 + z * (q2 + z * (q3 + z * q4)));
	return numerator / denominator;
}

static inline double truncate_root(double root)
{
	union binary64 leading = { .value = root };
	leading.bits &= UINT64_C(0xffffffff00000000);
	return leading.value;
}

double asin(double x)
{
	const uint64_t magnitude = magnitude_bits(x);
	if (magnitude >= one_bits)
		return magnitude == one_bits ? x * half_pi : invalid_angle(x, magnitude);
	const uint32_t high = magnitude >> 32;
	if (high < 0x3fe00000)
		return high < 0x3e500000 ? x : x + x * asin_correction(x * x);

	const double z = 0.5 * (1.0 - (union binary64){ .bits = magnitude }.value);
	const double root = __builtin_sqrt(z);
	const double correction = asin_correction(z);
	double result;
	if (high >= 0x3fef3333)
		result = half_pi - (2.0 * (root + root * correction) - half_pi_tail);
	else
	{
		const double leading = truncate_root(root);
		const double tail = (z - leading * leading) / (root + leading);
		result = 0.5 * half_pi -
			(2.0 * root * correction - (half_pi_tail - 2.0 * tail) - (0.5 * half_pi - 2.0 * leading));
	}
	return x < 0.0 ? -result : result;
}

double acos(double x)
{
	const uint64_t magnitude = magnitude_bits(x);
	if (magnitude >= one_bits)
		return magnitude == one_bits ? (x < 0.0 ? 2.0 * half_pi : 0.0) : invalid_angle(x, magnitude);
	const uint32_t high = magnitude >> 32;
	if (high < 0x3fe00000)
		return high <= 0x3c600000 ? half_pi : half_pi - (x - (half_pi_tail - x * asin_correction(x * x)));

	if (x < 0.0)
	{
		const double z = (1.0 + x) * 0.5;
		const double root = __builtin_sqrt(z);
		return 2.0 * (half_pi - (root + (asin_correction(z) * root - half_pi_tail)));
	}
	const double z = (1.0 - x) * 0.5;
	const double root = __builtin_sqrt(z);
	const double leading = truncate_root(root);
	const double tail = (z - leading * leading) / (root + leading);
	return 2.0 * (leading + (asin_correction(z) * root + tail));
}
