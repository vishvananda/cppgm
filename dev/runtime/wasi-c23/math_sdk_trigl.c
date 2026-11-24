/*
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 *
 * Adapted from the WASI SDK 34 binary128 trigonometric functions.
 * The FreeBSD inverse functions were converted to long double by David Schultz.
 */
#include <float.h>
#include <stdint.h>

#include "math_binary128.h"
#include "math_error.h"

static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ && FLT_EVAL_METHOD == 0);

__attribute__((visibility("hidden"))) int __rem_pio2l(long double, long double*);
__attribute__((visibility("hidden"))) long double __invtrigl_R(long double);
__attribute__((visibility("hidden"))) extern const long double __pio2_hi, __pio2_lo;

union binary128
{
	long double value;
	uint64_t words[2];
};

enum
{
	exponent_bias = LDBL_MAX_EXP - 1,
	tiny_exponent = exponent_bias - (LDBL_MANT_DIG + 1) / 2
};

static const uint64_t infinity_high = UINT64_C(0x7fff000000000000);
static const uint64_t sign_bit = UINT64_C(0x8000000000000000);
static const uint64_t one_high = UINT64_C(0x3fff000000000000);

static inline long double invalid_angle(long double x, uint64_t high, uint64_t low)
{
	const bool nan = high > infinity_high || (high == infinity_high && low != 0);
	return nan ? x + x : math_domain_error();
}

static inline bool in_primary_interval(uint64_t high, uint64_t low)
{
	// Use the SDK's binary64 pi/4 boundary widened to binary128.
	const uint64_t limit_high = UINT64_C(0x3ffe921fb54442d1);
	return high < limit_high || (high == limit_high && low < UINT64_C(0x8000000000000000));
}

static inline long double sine_in_quadrant(const long double angle[2], unsigned quadrant)
{
	switch (quadrant & 3U)
	{
	case 0:
		return __sinl(angle[0], angle[1], 1);
	case 1:
		return __cosl(angle[0], angle[1]);
	case 2:
		return -__sinl(angle[0], angle[1], 1);
	default:
		return -__cosl(angle[0], angle[1]);
	}
}

long double sinl(long double x)
{
	const union binary128 number = { .value = x };
	const uint64_t high = number.words[1] & ~sign_bit;
	if (in_primary_interval(high, number.words[0]))
		return high >> 48 < exponent_bias - LDBL_MANT_DIG / 2 ? x : __sinl(x, 0.0L, 0);
	if (high >= infinity_high)
		return invalid_angle(x, high, number.words[0]);
	long double angle[2];
	const unsigned quadrant = __rem_pio2l(x, angle);
	return sine_in_quadrant(angle, quadrant);
}

long double cosl(long double x)
{
	union binary128 number = { .value = x };
	number.words[1] &= ~sign_bit;
	const uint64_t high = number.words[1];
	if (in_primary_interval(high, number.words[0]))
		return high >> 48 < tiny_exponent ? 1.0L : __cosl(number.value, 0.0L);
	if (high >= infinity_high)
		return invalid_angle(x, high, number.words[0]);
	long double angle[2];
	const unsigned quadrant = __rem_pio2l(number.value, angle);
	return sine_in_quadrant(angle, quadrant + 1);
}

long double tanl(long double x)
{
	const union binary128 number = { .value = x };
	const uint64_t high = number.words[1] & ~sign_bit;
	if (in_primary_interval(high, number.words[0]))
		return high >> 48 < tiny_exponent ? x : __tanl(x, 0.0L, 0);
	if (high >= infinity_high)
		return invalid_angle(x, high, number.words[0]);
	long double angle[2];
	const unsigned quadrant = __rem_pio2l(x, angle);
	return __tanl(angle[0], angle[1], quadrant & 1U);
}

static inline long double truncate_root(long double root)
{
	union binary128 leading = { .value = root };
	leading.words[0] = 0;
	return leading.value;
}

long double asinl(long double x)
{
	union binary128 number = { .value = x };
	const bool negative = number.words[1] >> 63;
	const uint64_t high = number.words[1] & ~sign_bit;
	if (high >= one_high)
	{
		if (high == one_high && number.words[0] == 0)
			return negative ? -__pio2_hi : __pio2_hi;
		return invalid_angle(x, high, number.words[0]);
	}
	if (high >> 48 < exponent_bias - 1)
		return high >> 48 < tiny_exponent ? x : x + x * __invtrigl_R(x * x);

	number.words[1] = high;
	const long double z = (1.0L - number.value) * 0.5L;
	const long double root = sqrtl(z);
	const long double correction = __invtrigl_R(z);
	long double result;
	if ((uint16_t)(high >> 32) >= 0xee00)
		result = __pio2_hi - (2.0L * (root + root * correction) - __pio2_lo);
	else
	{
		const long double leading = truncate_root(root);
		const long double tail = (z - leading * leading) / (root + leading);
		result = 0.5L * __pio2_hi -
			(2.0L * root * correction - (__pio2_lo - 2.0L * tail) - (0.5L * __pio2_hi - 2.0L * leading));
	}
	return negative ? -result : result;
}

long double acosl(long double x)
{
	const union binary128 number = { .value = x };
	const bool negative = number.words[1] >> 63;
	const uint64_t high = number.words[1] & ~sign_bit;
	if (high >= one_high)
	{
		if (high == one_high && number.words[0] == 0)
			return negative ? 2.0L * __pio2_hi : 0.0L;
		return invalid_angle(x, high, number.words[0]);
	}
	if (high >> 48 < exponent_bias - 1)
	{
		if (high >> 48 < exponent_bias - LDBL_MANT_DIG - 1)
			return __pio2_hi;
		return __pio2_hi - (__invtrigl_R(x * x) * x - __pio2_lo + x);
	}
	if (negative)
	{
		const long double z = (1.0L + x) * 0.5L;
		const long double root = sqrtl(z);
		return 2.0L * (__pio2_hi - (__invtrigl_R(z) * root - __pio2_lo + root));
	}
	const long double z = (1.0L - x) * 0.5L;
	const long double root = sqrtl(z);
	const long double leading = truncate_root(root);
	const long double tail = (z - leading * leading) / (root + leading);
	return 2.0L * (__invtrigl_R(z) * root + tail + leading);
}
