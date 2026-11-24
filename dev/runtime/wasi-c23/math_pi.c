#include <float.h>
#include <math.h>
#include <stdint.h>

static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

// WASI SDK binary128 kernels for an angle with a separate residual.
long double __sinl(long double, long double, int);
long double __cosl(long double, long double);
long double __tanl(long double, long double, int);

typedef unsigned _BitInt(128) uint128;

union binary128
{
	long double value;
	uint64_t words[2];
};

struct reduced_turn
{
	long double fraction;
	unsigned quadrant;
};

enum
{
	exponent_bias = LDBL_MAX_EXP - 1,
	fraction_bits = LDBL_MANT_DIG - 1
};

static const uint64_t fraction_mask = UINT64_C(0x0000ffffffffffff);
static const long double pi = 0x1.921fb54442d18469898cc51701b8p+1L;
static const long double pi_tail = 8.67181013012378102479704402604335196876232334625653e-35L;
static const long double inverse_pi = 3.18309886183790671537767526745028724068919291480913e-1L;

static unsigned signed_quadrant(unsigned quadrant, bool negative)
{
	return (negative ? 0U - quadrant : quadrant) & 3U;
}

static struct reduced_turn reduce_turn(long double x)
{
	const union binary128 input = { .value = x };
	const unsigned encoded = (input.words[1] >> 48) & 0x7fff;
	if (encoded < exponent_bias - 2)
		return (struct reduced_turn){ x, 0 };
	if (encoded == 0x7fff)
		return (struct reduced_turn){ x - x, 0 };

	const bool negative = (input.words[1] >> 63) != 0;
	const int exponent = (int)encoded - exponent_bias;
	const long double signed_zero = __builtin_copysignl(0.0L, x);
	// The spacing is at least half a turn at this exponent. For large
	// inputs only the lowest significand bits can affect the quadrant.
	if (exponent >= fraction_bits - 1)
	{
		const unsigned quadrant = exponent > fraction_bits
			? 0
			: (unsigned)input.words[0] << (exponent - (fraction_bits - 1));
		return (struct reduced_turn){ signed_zero, signed_quadrant(quadrant, negative) };
	}

	const uint128 significand = ((uint128)((input.words[1] & fraction_mask) | (UINT64_C(1) << 48)) << 64) |
		input.words[0];
	// Round twice the magnitude to the nearest even integer. Its low two
	// bits select the quadrant, and the discarded bits give the exact
	// remainder without multiplying the original argument by pi.
	const unsigned shift = fraction_bits - 1 - exponent;
	const uint128 step = (uint128)1 << shift;
	unsigned quadrant = (unsigned)(significand >> shift) & 3U;
	uint128 remainder = significand & (step - 1);
	if (remainder == 0)
		return (struct reduced_turn){ signed_zero, signed_quadrant(quadrant, negative) };
	const uint128 half = step >> 1;
	const bool round_up = remainder > half || (remainder == half && (quadrant & 1));
	if (round_up)
	{
		++quadrant;
		remainder = step - remainder;
	}

	const uint64_t high = remainder >> 64;
	const unsigned top = high != 0 ? 127 - __builtin_clzll(high) : 63 - __builtin_clzll((uint64_t)remainder);
	const uint128 normalized = remainder << (fraction_bits - top);
	const uint64_t exp = exponent_bias + exponent - fraction_bits + (int)top;
	const uint64_t sign = (uint64_t)(negative != round_up) << 63;
	const union binary128 fraction = { .words = { (uint64_t)normalized,
										   sign | (exp << 48) | ((uint64_t)(normalized >> 64) & fraction_mask) } };
	return (struct reduced_turn){ fraction.value, signed_quadrant(quadrant, negative) };
}

static long double angle_tail(long double fraction, long double angle)
{
	return __builtin_fmal(fraction, pi, -angle) + fraction * pi_tail;
}

static long double sincos_turn(long double x, bool cosine)
{
	const struct reduced_turn reduced = reduce_turn(x);
	const long double fraction = reduced.fraction;
	const unsigned quadrant = reduced.quadrant + cosine;
	if (isnan(fraction))
		return fraction;
	if (fraction == 0.0L)
	{
		if (quadrant & 1)
			return quadrant & 2 ? -1.0L : 1.0L;
		return cosine ? 0.0L : fraction;
	}
	long double result;
	if (__builtin_fabsl(fraction) < 0x1p-60L)
		result = quadrant & 1 ? 1.0L : fraction * pi;
	else
	{
		const long double angle = fraction * pi;
		const long double tail = angle_tail(fraction, angle);
		result = quadrant & 1 ? __cosl(angle, tail) : __sinl(angle, tail, 1);
	}
	return quadrant & 2 ? -result : result;
}

long double sinpil(long double x)
{
	return sincos_turn(x, false);
}

long double cospil(long double x)
{
	return sincos_turn(x, true);
}

long double tanpil(long double x)
{
	const struct reduced_turn reduced = reduce_turn(x);
	const long double fraction = reduced.fraction;
	const unsigned quadrant = reduced.quadrant;
	if (isnan(fraction))
		return fraction;
	if (fraction == 0.0L)
	{
		if (quadrant & 1)
			return quadrant & 2 ? -INFINITY : INFINITY;
		return quadrant & 2 ? -fraction : fraction;
	}
	const long double magnitude = __builtin_fabsl(fraction);
	if (magnitude == 0.25L)
		return __builtin_copysignl(1.0L, fraction);
	const long double angle = fraction * pi;
	if (!(quadrant & 1) && magnitude < 0x1p-60L)
		return angle;
	return __tanl(angle, angle_tail(fraction, angle), quadrant & 1);
}

long double acospil(long double x)
{
	if (x == -1.0L)
		return 1.0L;
	if (x == 0.0L)
		return 0.5L;
	return acosl(x) * inverse_pi;
}

long double asinpil(long double x)
{
	if (__builtin_fabsl(x) == 1.0L)
		return __builtin_copysignl(0.5L, x);
	return asinl(x) * inverse_pi;
}

long double atanpil(long double x)
{
	if (isinf(x))
		return __builtin_copysignl(0.5L, x);
	if (__builtin_fabsl(x) == 1.0L)
		return __builtin_copysignl(0.25L, x);
	return atanl(x) * inverse_pi;
}

long double atan2pil(long double y, long double x)
{
	if (isnan(x) || isnan(y))
		return x + y;
	if (isinf(x))
	{
		if (isinf(y))
			return __builtin_copysignl(signbit(x) ? 0.75L : 0.25L, y);
		return __builtin_copysignl(signbit(x) ? 1.0L : 0.0L, y);
	}
	if (y == 0.0L)
		return signbit(x) ? __builtin_copysignl(1.0L, y) : y;
	if (x == 0.0L || isinf(y))
		return __builtin_copysignl(0.5L, y);
	return atan2l(y, x) * inverse_pi;
}
