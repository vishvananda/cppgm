/*
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 *
 * Adapted from the FreeBSD msun float trigonometric implementations in
 * WASI SDK 34. Float conversions by Ian Lance Taylor, Cygnus Support.
 * The circular shortcuts were optimized by Bruce D. Evans.
 */
#include <float.h>
#include <stdint.h>

#include "math_error.h"

static_assert(sizeof(float) == 4 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 && FLT_EVAL_METHOD == 0);

__attribute__((visibility("hidden"))) float __sindf(double);
__attribute__((visibility("hidden"))) float __cosdf(double);
__attribute__((visibility("hidden"))) float __tandf(double, int);
__attribute__((visibility("hidden"))) int __rem_pio2f(float, double*);

union binary32
{
	float value;
	uint32_t bits;
};

enum angle_function
{
	angle_sine,
	angle_cosine,
	angle_tangent
};

static const uint32_t infinity_bits = 0x7f800000;
static const uint32_t one_bits = 0x3f800000;
static const double half_pi = 0x1.921fb54442d18p+0;
static const float half_pi_high = 0x1.921fb4p+0f;
static const float half_pi_tail = 7.5497894159e-08f;

static inline float invalid_angle(float x, uint32_t magnitude)
{
	return magnitude > infinity_bits ? x + x : math_domain_error();
}

static inline __attribute__((always_inline)) float in_quadrant(double angle, unsigned quadrant, enum angle_function op)
{
	if (op == angle_tangent)
		return __tandf(angle, quadrant & 1U);
	if (op == angle_cosine)
		++quadrant;
	switch (quadrant & 3U)
	{
	case 0:
		return __sindf(angle);
	case 1:
		return __cosdf(angle);
	case 2:
		return __sindf(-angle);
	default:
		return -__cosdf(angle);
	}
}

static inline __attribute__((always_inline)) float near_multiple(
	float x, uint32_t magnitude, bool negative, unsigned quadrant, enum angle_function op)
{
	const double offset = quadrant * half_pi;
	if (op == angle_cosine)
		return in_quadrant((union binary32){ .bits = magnitude }.value - offset, quadrant, op);
	if (op == angle_tangent)
		return __tandf(negative ? x + offset : x - offset, quadrant & 1U);
	// Select the signed quadrant before calling the kernel. The sign is
	// part of the selected operation and need not survive the call.
	if (negative)
		return in_quadrant(x + offset, 0U - quadrant, op);
	return in_quadrant(x - offset, quadrant, op);
}

static inline __attribute__((always_inline)) float circular(float x, enum angle_function op)
{
	const uint32_t bits = (union binary32){ .value = x }.bits;
	const uint32_t magnitude = bits & 0x7fffffff;
	if (magnitude <= 0x3f490fda)
	{
		if (magnitude < 0x39800000)
			return op == angle_cosine ? 1.0f : x;
		return in_quadrant(x, 0, op);
	}

	// The first four multiples need only a binary64 subtraction.
	const bool negative = bits >> 31;
	if (magnitude <= 0x407b53d1)
		return magnitude <= 0x4016cbe3 ? near_multiple(x, magnitude, negative, 1, op)
									   : near_multiple(x, magnitude, negative, 2, op);
	if (magnitude <= 0x40e231d5)
		return magnitude <= 0x40afeddf ? near_multiple(x, magnitude, negative, 3, op)
									   : near_multiple(x, magnitude, negative, 4, op);
	if (magnitude >= infinity_bits)
		return invalid_angle(x, magnitude);
	double angle;
	const unsigned quadrant = __rem_pio2f(x, &angle);
	return in_quadrant(angle, quadrant, op);
}

float sinf(float x)
{
	return circular(x, angle_sine);
}

float cosf(float x)
{
	return circular(x, angle_cosine);
}

float tanf(float x)
{
	return circular(x, angle_tangent);
}

static inline float asin_correction(float z)
{
	const float p0 = 1.6666586697e-01f;
	const float p1 = -4.2743422091e-02f;
	const float p2 = -8.6563630030e-03f;
	const float q1 = -7.0662963390e-01f;
	return z * (p0 + z * (p1 + z * p2)) / (1.0f + z * q1);
}

float asinf(float x)
{
	const uint32_t bits = (union binary32){ .value = x }.bits;
	const uint32_t magnitude = bits & 0x7fffffff;
	if (magnitude >= one_bits)
		return magnitude == one_bits ? (float)(x * half_pi) : invalid_angle(x, magnitude);
	if (magnitude < 0x3f000000)
		return magnitude < 0x39800000 ? x : x + x * asin_correction(x * x);

	const float z = (1.0f - (union binary32){ .bits = magnitude }.value) * 0.5f;
	// Keep the SDK's binary64 square root and final subtraction.
	const double root = __builtin_sqrt((double)z);
	const float result = half_pi - 2.0 * (root + root * asin_correction(z));
	return bits >> 31 ? -result : result;
}

float acosf(float x)
{
	const uint32_t bits = (union binary32){ .value = x }.bits;
	const uint32_t magnitude = bits & 0x7fffffff;
	if (magnitude >= one_bits)
		return magnitude == one_bits ? (bits >> 31 ? 0x1.921fb6p+1f : 0.0f) : invalid_angle(x, magnitude);
	if (magnitude < 0x3f000000)
		return magnitude <= 0x32800000 ? 0x1.921fb6p+0f
									   : half_pi_high - (x - (half_pi_tail - x * asin_correction(x * x)));

	if (bits >> 31)
	{
		const float z = (1.0f + x) * 0.5f;
		const float root = __builtin_sqrtf(z);
		return 2.0f * (half_pi_high - (root + (asin_correction(z) * root - half_pi_tail)));
	}
	const float z = (1.0f - x) * 0.5f;
	const float root = __builtin_sqrtf(z);
	union binary32 truncated = { .value = root };
	truncated.bits &= 0xfffff000;
	const float leading = truncated.value;
	const float tail = (z - leading * leading) / (root + leading);
	return 2.0f * (leading + (asin_correction(z) * root + tail));
}
