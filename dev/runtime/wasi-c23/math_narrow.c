#include <fenv.h>
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"
#include "softfloat.h"

static_assert(FE_ALL_EXCEPT == 0 && FE_TONEAREST == 0);
static_assert(FLT_RADIX == 2 && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);
static_assert(FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 && sizeof(float) == 4);
static_assert(DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024 && sizeof(double) == 8);
static_assert(LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384 && sizeof(long double) == 16);

static float64_t binary64(double x)
{
	float64_t bits;
	memcpy(&bits, &x, sizeof bits);
	return bits;
}

static double as_double(float64_t bits)
{
	double x;
	memcpy(&x, &bits, sizeof x);
	return x;
}

static float128_t binary128(long double x)
{
	float128_t bits;
	memcpy(&bits, &x, sizeof bits);
	return bits;
}

static long double as_long_double(float128_t bits)
{
	long double x;
	memcpy(&x, &bits, sizeof x);
	return x;
}

/* A rounded binary64 result can double-round only at a binary32
   midpoint. Subnormal binary32 spacing is fixed at 2^-149. */
static bool is_float_midpoint(double x)
{
	const uint64_t bits = binary64(x).v;
	const unsigned exponent = (bits >> 52) & 0x7ff;
	const unsigned first_normal = DBL_MAX_EXP - 2 + FLT_MIN_EXP;
	const unsigned zero_midpoint = first_normal - FLT_MANT_DIG;
	if (exponent - first_normal <= FLT_MAX_EXP - FLT_MIN_EXP)
	{
		const uint64_t half = UINT64_C(1) << (DBL_MANT_DIG - FLT_MANT_DIG - 1);
		return (bits & (2 * half - 1)) == half;
	}
	if (exponent - zero_midpoint < FLT_MANT_DIG)
	{
		const uint64_t leading = UINT64_C(1) << (DBL_MANT_DIG - 1);
		const uint64_t half = leading >> (exponent - zero_midpoint);
		return ((bits | leading) & (2 * half - 1)) == half;
	}
	return false;
}

/* The software operations round toward zero and set the low bit when
   inexact. Narrower midpoints are exact even values in the wide format.
   The odd result therefore keeps the exact value on its side of a
   midpoint before the final nearest-even conversion. */
#define NARROW_BINARY(name, op, native_op) \
	float f##name(double x, double y) \
	{ \
		const double wide = x native_op y; \
		if (!is_float_midpoint(wide)) \
			return (float)wide; \
		return (float)as_double(f64_##op(binary64(x), binary64(y))); \
	} \
	float f##name##l(long double x, long double y) \
	{ \
		return (float)as_long_double(f128_##op(binary128(x), binary128(y))); \
	} \
	double d##name##l(long double x, long double y) \
	{ \
		return (double)as_long_double(f128_##op(binary128(x), binary128(y))); \
	}

NARROW_BINARY(add, add, +)
NARROW_BINARY(sub, sub, -)
NARROW_BINARY(mul, mul, *)
NARROW_BINARY(div, div, /)

float ffma(double x, double y, double z)
{
	return (float)as_double(f64_mulAdd(binary64(x), binary64(y), binary64(z)));
}

float ffmal(long double x, long double y, long double z)
{
	return (float)as_long_double(f128_mulAdd(binary128(x), binary128(y), binary128(z)));
}

double dfmal(long double x, long double y, long double z)
{
	return (double)as_long_double(f128_mulAdd(binary128(x), binary128(y), binary128(z)));
}

float fsqrt(double x)
{
	const double wide = __builtin_sqrt(x);
	if (!is_float_midpoint(wide))
		return (float)wide;
	return (float)as_double(f64_sqrt(binary64(x)));
}

float fsqrtl(long double x)
{
	return (float)as_long_double(f128_sqrt(binary128(x)));
}

double dsqrtl(long double x)
{
	return (double)as_long_double(f128_sqrt(binary128(x)));
}
