/*
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 *
 * Adapted from the FreeBSD msun e_log10f.c and s_log1pf.c kernels
 * in WASI SDK 34 for fixed nearest-even rounding and errno.
 */
#include <float.h>
#include <stdint.h>

#include "math_error.h"

static_assert(FLT_EVAL_METHOD == 0 && FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128);

union binary32
{
	float value;
	uint32_t bits;
};

static inline float log_tail(float s, float half_square)
{
	const float z = s * s;
	const float w = z * z;
	const float even = w * (0xccce13.0p-25f + w * 0xf89e26.0p-26f);
	const float odd = z * (0xaaaaaa.0p-24f + w * 0x91e9ee.0p-25f);
	return s * (half_square + (odd + even));
}

static inline int reduce_log(union binary32* number)
{
	const uint32_t adjusted = number->bits + (0x3f800000 - 0x3f3504f3);
	number->bits = (adjusted & 0x007fffff) + 0x3f3504f3;
	return (int)(adjusted >> 23) - 0x7f;
}

float log10f(float x)
{
	union binary32 number = { .value = x };
	const uint32_t bits = number.bits;
	int exponent = 0;
	if (bits < 0x00800000 || bits >> 31)
	{
		const uint32_t magnitude = bits << 1;
		if (magnitude == 0)
			return -math_range_error();
		if (bits >> 31)
			return magnitude > 0xff000000 ? x + x : math_domain_error();
		number.value = x * 0x1p25f;
		exponent = -25;
	}
	else if (bits >= 0x7f800000)
		return x + x;
	else if (bits == 0x3f800000)
		return 0.0f;

	exponent += reduce_log(&number);
	const float f = number.value - 1.0f;
	const float half_square = 0.5f * f * f;
	union binary32 leading = { .value = f - half_square };
	leading.bits &= 0xfffff000;
	const float hi = leading.value;
	const float lo = f - hi - half_square + log_tail(f / (2.0f + f), half_square);

	const float inv_ln10_hi = 4.3432617188e-01f;
	const float inv_ln10_lo = -3.1689971365e-05f;
	const float log10_2_hi = 3.0102920532e-01f;
	const float log10_2_lo = 7.9034151668e-07f;
	return exponent * log10_2_lo + (lo + hi) * inv_ln10_lo + lo * inv_ln10_hi + hi * inv_ln10_hi +
		exponent * log10_2_hi;
}

float log1pf(float x)
{
	const union binary32 input = { .value = x };
	const uint32_t bits = input.bits;
	int exponent = 1;
	float f;
	float correction;
	if (bits < 0x3ed413d0 || bits >> 31)
	{
		if (bits >= 0xbf800000)
		{
			if (bits == 0xbf800000)
				return -math_range_error();
			return bits > 0xff800000 ? x + x : math_domain_error();
		}
		if (bits << 1 < 0x33800000u << 1)
			return x;
		if (bits <= 0xbe95f619)
		{
			exponent = 0;
			correction = 0.0f;
			f = x;
		}
	}
	else if (bits >= 0x7f800000)
		return x + x;

	if (exponent != 0)
	{
		const float sum = 1.0f + x;
		union binary32 reduced = { .value = sum };
		exponent = reduce_log(&reduced);
		correction = exponent < 25 ? (exponent >= 2 ? 1.0f - (sum - x) : x - (sum - 1.0f)) / sum : 0.0f;
		f = reduced.value - 1.0f;
	}

	const float ln2_hi = 6.9313812256e-01f;
	const float ln2_lo = 9.0580006145e-06f;
	const float half_square = 0.5f * f * f;
	return log_tail(f / (2.0f + f), half_square) + (exponent * ln2_lo + correction) - half_square + f +
		exponent * ln2_hi;
}

float logp1f(float x)
{
	return log1pf(x);
}
