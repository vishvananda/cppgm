/*
 * Implementation of the true gamma function (as opposed to lgamma)
 * for 128-bit long double. Adapted for WASI.
 *
 * Copyright (c) 2006-2026, Arm Limited.
 * SPDX-License-Identifier: MIT OR Apache-2.0 WITH LLVM-exception
 */

#include <float.h>
#include <stddef.h>
#include <stdint.h>

#include "math_binary128.h"
#include "math_error.h"
#include "tgamma128_data.h"

static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

static const uint64_t fraction_mask = UINT64_C(0x0000ffffffffffff);
static const int exponent_bias = LDBL_MAX_EXP - 1;

#define lenof(values) (sizeof(values) / sizeof(*(values)))

/*
 * Helper routine to evaluate a polynomial via Horner's rule.  */
static long double poly(const long double* coeffs, size_t n, long double x)
{
	long double result = coeffs[--n];

	while (n > 0)
		result = (result * x) + coeffs[--n];

	return result;
}

/* Return tgamma(x) on the assumption that x >= 8.  */
static long double tgamma_large(long double x, bool negative, long double negadjust)
{
	/*
   * In this range we compute gamma(x) as x^(x-1/2) * e^-x * K,
   * where K is a correction factor computed as a polynomial in 1/x.
   *
   * This is vaguely inspired by the Lanczos approximation, but that
   * approximation suffers badly from cancellation and loses
   * significance here.  */
	long double t = 1 / x;
	long double p = poly(coeffs_large, lenof(coeffs_large), t);

	/*
   * To avoid overflow in cases where x^(x-0.5) does overflow
   * but gamma(x) does not, we split x^(x-0.5) in half and
   * multiply back up _after_ multiplying the shrinking factor
   * of exp(-(x-0.5)).
   *
   * Note that computing x-0.5 and (x-0.5)/2 is exact for the
   * relevant range of x, so the only sources of error are pow
   * and exp themselves, plus the multiplications.  */
	long double powhalf = powl(x, (x - 0.5L) / 2.0L);
	long double expret = expl(-(x - 0.5L));

	if (!negative)
	{
		return math_quad_overflow((expret * powhalf) * powhalf * p);
	}
	else
	{
		/*
       * Apply the reflection formula as commented below, but
       * carefully: negadjust has magnitude less than 1, so it can
       * turn a case where gamma(+x) would overflow into a case
       * where gamma(-x) doesn't underflow. Not only that, but the
       * FP format has greater range in the tiny domain due to
       * denormals. For both reasons, it's not good enough to
       * compute the positive result and then adjust it.  */
		long double ret = 1 / ((expret * powhalf) * (x * negadjust) * p);
		return ret / powhalf;
	}
}

/* Return tgamma(x) on the assumption that 0 <= x < 1/32.  */
static long double tgamma_tiny(long double x, bool negative, long double negadjust)
{
	/*
   * For x near zero, we use a polynomial approximation to
   * g = 1/(x*gamma(x)), and then return 1/(g*x).  */
	long double g = poly(coeffs_tiny, lenof(coeffs_tiny), x);
	if (!negative)
		return 1.0L / (g * x);
	else
		return g / negadjust;
}

/* Return tgamma(x) on the assumption that 1 <= x <= 2.  */
static long double tgamma_central(long double x)
{
	/*
   * In this central interval, our strategy is to finding the
   * difference between x and the point where gamma has a minimum,
   * and approximate based on that.  */

	/* The difference between the input x and the minimum x. The first
   * subtraction is expected to be exact, since x and min_hi have
   * the same exponent (unless x=2, in which case it will still be
   * exact).  */
	long double t = (x - min_x_hi) - min_x_lo;

	/*
   * Now use two different polynomials for the intervals [1,m] and
   * [m,2].  */
	long double p;
	if (t < 0)
		p = poly(coeffs_central_neg, lenof(coeffs_central_neg), -t);
	else
		p = poly(coeffs_central_pos, lenof(coeffs_central_pos), t);

	return (min_y_lo + p * (t * t)) + min_y_hi;
}

static long double gamma_recurrence(long double x)
{
	/*
   * For x in [2,8) we range-reduce downwards to the interval
   * [1,2) by repeated application of the recurrence formula.
   *
   * Actually multiplying (x-1) by (x-2) by (x-3) and so on
   * would introduce multiple ULPs of rounding error. We can get
   * better accuracy by writing x = (k+1/2) + t, where k is an
   * integer and |t|<1/2, and expanding out the obvious factor
   * (x-1)(x-2)...(x-k+1) as a polynomial in t.  */
	long double mult;
	int i = x;
	if (i == 2)
	{ /* x in [2,3).  */
		mult = (x - 1);
	}
	else
	{
		long double t = x - (i + 0.5L);
		switch (i)
		{
			/* E.g. for x=3.5+t, we want
	       * (x-1)(x-2) = (2.5+t)(1.5+t) = 3.75 + 4t + t^2.  */
		case 3:
			mult = 3.75L + t * (4.0L + t);
			break;
		case 4:
			mult = 13.125L + t * (17.75L + t * (7.5L + t));
			break;
		case 5:
			mult = 59.0625L + t * (93.0L + t * (51.50L + t * (12.0L + t)));
			break;
		case 6:
			mult = 324.84375L + t * (570.5625L + t * (376.250L + t * (117.5L + t * (17.5L + t))));
			break;
		case 7:
			mult = 2111.484375L + t * (4033.5L + t * (3016.1875L + t * (1140.0L + t * (231.25L + t * (24.0L + t)))));
			break;
		default:
			__builtin_unreachable();
		}
	}

	return tgamma_central(x - (i - 1)) * mult;
}

long double tgammal(long double x)
{
	const union math_binary128 input = { .value = x };
	const uint64_t high = input.words[1];
	const bool negative = (high >> 63) != 0;
	const unsigned encoded = (high >> 48) & 0x7fff;
	const int exponent = (int)encoded - exponent_bias;

	if (encoded == 0x7fff)
	{
		if ((high & fraction_mask) || input.words[0])
			return x + x;
		return negative ? math_domain_error() : x;
	}
	if (exponent < -113)
	{
		if ((high << 1) == 0 && input.words[0] == 0)
			return negative ? -math_range_error() : math_range_error();
		return math_quad_overflow(1.0L / x);
	}
	if (!negative && exponent >= 11)
		return math_range_error();

	// Euler reflection expressed in terms of gamma(-x) avoids rounding 1-x.
	long double adjustment = 0.0L;
	if (negative)
	{
		const long double inverse_pi = 0x1.45f306dc9c882a53f84eafa3ea6ap-2L;
		const long double sine = sinpil(x);
		if (sine == 0.0L)
			return math_domain_error();
		if (exponent >= 11)
			return __builtin_copysignl(0.0L, sine);
		adjustment = sine * inverse_pi;
		x = -x;
	}
	if (exponent >= 3)
		return tgamma_large(x, negative, adjustment);
	if (exponent < -5)
		return tgamma_tiny(x, negative, adjustment);

	long double gamma;
	if (exponent == 0)
		gamma = tgamma_central(x);
	else if (exponent < 0)
		gamma = tgamma_central(1.0L + x) / x;
	else
		gamma = gamma_recurrence(x);
	return negative ? 1.0L / (gamma * x * adjustment) : gamma;
}
