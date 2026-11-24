/*
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 *
 * Adapted from the FreeBSD msun e_log10.c and s_log1p.c kernels
 * in WASI SDK 34 for fixed nearest-even rounding and errno.
 */
#include <float.h>
#include <stdint.h>

#include "math_error.h"

static_assert(FLT_EVAL_METHOD == 0 && DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024);

union binary64
{
	double value;
	uint64_t bits;
};

static inline double log_tail(double s, double half_square)
{
	const double z = s * s;
	const double w = z * z;
	const double even = w * (3.999999999940941908e-01 + w * (2.222219843214978396e-01 + w * 1.531383769920937332e-01));
	const double odd = z *
		(6.666666666666735130e-01 +
			w * (2.857142874366239149e-01 + w * (1.818357216161805012e-01 + w * 1.479819860511658591e-01)));
	return s * (half_square + (odd + even));
}

// Reduce into [sqrt(2)/2, sqrt(2)] while retaining the low word.
static inline int reduce_log(union binary64* number)
{
	const uint32_t adjusted = (number->bits >> 32) + (0x3ff00000 - 0x3fe6a09e);
	const uint32_t high = (adjusted & 0x000fffff) + 0x3fe6a09e;
	number->bits = (uint64_t)high << 32 | (uint32_t)number->bits;
	return (int)(adjusted >> 20) - 0x3ff;
}

double log10(double x)
{
	union binary64 number = { .value = x };
	const uint32_t high = number.bits >> 32;
	int exponent = 0;
	if (high < 0x00100000 || high >> 31)
	{
		const uint64_t magnitude = number.bits << 1;
		if (magnitude == 0)
			return -math_range_error();
		if (high >> 31)
			return magnitude > UINT64_C(0xffe0000000000000) ? x + x : math_domain_error();
		number.value = x * 0x1p54;
		exponent = -54;
	}
	else if (high >= 0x7ff00000)
		return x + x;
	else if (number.bits == UINT64_C(0x3ff0000000000000))
		return 0.0;

	exponent += reduce_log(&number);
	const double f = number.value - 1.0;
	const double half_square = 0.5 * f * f;
	union binary64 leading = { .value = f - half_square };
	leading.bits &= UINT64_C(0xffffffff00000000);
	const double hi = leading.value;
	const double lo = f - hi - half_square + log_tail(f / (2.0 + f), half_square);

	const double inv_ln10_hi = 4.34294481878168880939e-01;
	const double inv_ln10_lo = 2.50829467116452752298e-11;
	const double log10_2_hi = 3.01029995663611771306e-01;
	const double log10_2_lo = 3.69423907715893078616e-13;
	const double log_hi = hi * inv_ln10_hi;
	const double scale_hi = exponent * log10_2_hi;
	const double sum = scale_hi + log_hi;
	const double residual = exponent * log10_2_lo + (lo + hi) * inv_ln10_lo + lo * inv_ln10_hi;
	return (residual + ((scale_hi - sum) + log_hi)) + sum;
}

double log1p(double x)
{
	const union binary64 input = { .value = x };
	const uint32_t high = input.bits >> 32;
	int exponent = 1;
	double f;
	double correction;
	if (high < 0x3fda827a || high >> 31)
	{
		if (high >= 0xbff00000)
		{
			if (input.bits == UINT64_C(0xbff0000000000000))
				return -math_range_error();
			return input.bits > UINT64_C(0xfff0000000000000) ? x + x : math_domain_error();
		}
		if (high << 1 < 0x3ca00000u << 1)
			return x;
		if (high <= 0xbfd2bec4)
		{
			exponent = 0;
			correction = 0.0;
			f = x;
		}
	}
	else if (high >= 0x7ff00000)
		return x + x;

	if (exponent != 0)
	{
		const double sum = 1.0 + x;
		union binary64 reduced = { .value = sum };
		exponent = reduce_log(&reduced);
		// Account for the rounding of 1+x before taking the logarithm.
		correction = exponent < 54 ? (exponent >= 2 ? 1.0 - (sum - x) : x - (sum - 1.0)) / sum : 0.0;
		f = reduced.value - 1.0;
	}

	const double ln2_hi = 6.93147180369123816490e-01;
	const double ln2_lo = 1.90821492927058770002e-10;
	const double half_square = 0.5 * f * f;
	return log_tail(f / (2.0 + f), half_square) + (exponent * ln2_lo + correction) - half_square + f +
		exponent * ln2_hi;
}

double logp1(double x)
{
	return log1p(x);
}
