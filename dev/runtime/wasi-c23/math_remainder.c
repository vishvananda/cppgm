#include <float.h>
#include <math.h>
#include <stdint.h>

#include "math_error.h"

static_assert(sizeof(long double) == 16 && LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

typedef unsigned _BitInt(128) uint128;

union binary128
{
	long double value;
	uint128 bits;
};

struct mantissa
{
	uint128 value;
	int exponent;
};

enum
{
	fraction_bits = LDBL_MANT_DIG - 1
};

static const uint128 implicit_bit = (uint128)1 << fraction_bits;
static const uint128 sign_bit = (uint128)1 << 127;
static const uint128 infinity_bits = (uint128)0x7fff << fraction_bits;

static unsigned normalization_shift(uint128 mantissa)
{
	const uint64_t high = mantissa >> 64;
	const unsigned top = high != 0 ? 127 - __builtin_clzll(high) : 63 - __builtin_clzll((uint64_t)mantissa);
	return fraction_bits - top;
}

static struct mantissa unpack(uint128 magnitude)
{
	const int exponent = magnitude >> fraction_bits;
	if (exponent != 0)
		return (struct mantissa){ (magnitude & (implicit_bit - 1)) | implicit_bit, exponent };

	const unsigned shift = normalization_shift(magnitude);
	return (struct mantissa){ magnitude << shift, 1 - (int)shift };
}

static long double pack(uint128 mantissa, int exponent, uint128 sign)
{
	if (mantissa != 0)
	{
		const unsigned shift = normalization_shift(mantissa);
		mantissa <<= shift;
		exponent -= (int)shift;
		if (exponent > 0)
			mantissa = (mantissa & (implicit_bit - 1)) | ((uint128)exponent << fraction_bits);
		else
			mantissa >>= 1 - exponent;
	}
	return (union binary128){ .bits = sign | mantissa }.value;
}

long double remquol(long double x, long double y, int* quotient)
{
	const uint128 dividend = (union binary128){ .value = x }.bits;
	const uint128 divisor = (union binary128){ .value = y }.bits;
	const uint128 abs_x = dividend & (sign_bit - 1);
	const uint128 abs_y = divisor & (sign_bit - 1);

	*quotient = 0;
	if (abs_x > infinity_bits || abs_y > infinity_bits)
		return x + y;
	if (abs_x == infinity_bits || abs_y == 0)
		return math_domain_error();
	if (abs_x == 0 || abs_y == infinity_bits)
		return x;

	const struct mantissa a = unpack(abs_x);
	const struct mantissa b = unpack(abs_y);
	const int distance = a.exponent - b.exponent;
	if (distance < -1)
		return x;

	uint128 rest = a.value;
	uint128 sign = dividend & sign_bit;
	int exponent = a.exponent;
	unsigned low_bits = 0;
	if (distance < 0)
	{
		// x is below y, so the nearest quotient is zero or one.
		if (rest <= b.value)
			return x;
		rest = (b.value << 1) - rest;
		sign ^= sign_bit;
		low_bits = 1;
	}
	else
	{
		// After each subtract, the remainder fits in one significand.
		// Only the low three quotient bits are observable.
		for (int remaining = distance;; --remaining)
		{
			low_bits <<= 1;
			if (rest >= b.value)
			{
				rest -= b.value;
				low_bits |= 1U;
			}
			if (remaining == 0)
				break;
			if (rest == 0)
			{
				low_bits <<= remaining < 3 ? remaining : 3;
				break;
			}
			rest <<= 1;
		}
		exponent = b.exponent;
		const uint128 twice = rest << 1;
		if (twice > b.value || (twice == b.value && (low_bits & 1U)))
		{
			rest = b.value - rest;
			sign ^= sign_bit;
			++low_bits;
		}
	}

	const int magnitude = (int)(low_bits & 7U);
	*quotient = ((dividend ^ divisor) & sign_bit) != 0 ? -magnitude : magnitude;
	return pack(rest, exponent, sign);
}

long double remainderl(long double x, long double y)
{
	int quotient;
	return remquol(x, y, &quotient);
}
