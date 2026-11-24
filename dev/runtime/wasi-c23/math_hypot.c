// The binary64 and binary128 scaled norms adapt musl in WASI SDK 34.
#include "math_error.h"
#include "math_float_round.h"

static double correct_float_norm(double root, double square_x, double square_y, double sum)
{
	// At a binary32 midpoint the binary64 square of the root is exact.
	double difference = sum - root * root;
	if (difference == 0)
	{
		const bool x_larger = square_x >= square_y;
		const double high = x_larger ? square_x : square_y;
		const double low = x_larger ? square_y : square_x;
		difference = (high - sum) + low;
	}
	union binary64 result = { .value = root };
	if (difference != 0)
		result.bits += difference < 0 ? -1 : 1;
	return result.value;
}

float hypotf(float x, float y)
{
	// Both squares are exact and stay within binary64 range, including
	// at the binary32 subnormal and overflow boundaries.
	const double square_x = (double)x * x;
	const double square_y = (double)y * y;
	const double sum = square_x + square_y;
	const union binary64 root = { .value = __builtin_sqrt(sum) };
	const unsigned exponent = root.bits >> binary64_fraction_bits & (2 * DBL_MAX_EXP - 1);
	if (exponent == 2 * DBL_MAX_EXP - 1)
		return __builtin_isinf(x) || __builtin_isinf(y) ? INFINITY : (float)root.value;
	const double adjusted = float_midpoint(root.bits, exponent)
		? correct_float_norm(root.value, square_x, square_y, sum)
		: root.value;
	const float result = (float)adjusted;
	if (__builtin_isinf(result))
		errno = ERANGE;
	return result;
}

#define DEFINE_SQUARE(type, name, split) \
	static type name(type x, type* low) \
	{ \
		const type scaled = x * split; \
		const type high = (x - scaled) + scaled; \
		const type tail = x - high; \
		const type square = x * x; \
		*low = ((high * high - square) + 2 * high * tail) + tail * tail; \
		return square; \
	}

DEFINE_SQUARE(double, square_double, (0x1p27 + 1))
DEFINE_SQUARE(long double, square_quad, (0x1p57L + 1))

static double norm_double(double x, double y)
{
	double tail_x, tail_y;
	const double square_x = square_double(x, &tail_x);
	const double square_y = square_double(y, &tail_y);
	return __builtin_sqrt(((tail_y + tail_x) + square_y) + square_x);
}

double hypot(double x, double y)
{
	union binary64 ux = { .value = x }, uy = { .value = y };
	const uint64_t magnitude_mask = UINT64_C(0x7fffffffffffffff);
	ux.bits &= magnitude_mask;
	uy.bits &= magnitude_mask;
	if (ux.bits < uy.bits)
	{
		const union binary64 swap = ux;
		ux = uy;
		uy = swap;
	}
	x = ux.value;
	y = uy.value;
	const unsigned ex = ux.bits >> binary64_fraction_bits;
	const unsigned ey = uy.bits >> binary64_fraction_bits;
	if (ey == 2 * DBL_MAX_EXP - 1)
		return y;
	if (ex == 2 * DBL_MAX_EXP - 1 || uy.bits == 0 || ex - ey > 64)
		return x;
	// Leave room for the split significands and both squares.
	if (ex > binary64_bias + 510)
	{
		const double result = norm_double(x * 0x1p-700, y * 0x1p-700) * 0x1p700;
		if (__builtin_isinf(result))
			errno = ERANGE;
		return result;
	}
	if (ey < binary64_bias - 450)
		return norm_double(x * 0x1p700, y * 0x1p700) * 0x1p-700;
	return norm_double(x, y);
}

static_assert(LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384 && sizeof(long double) == 16);
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

union binary128
{
	long double value;
	uint64_t words[2];
};

static long double norm_quad(long double x, long double y)
{
	long double tail_x, tail_y;
	const long double square_x = square_quad(x, &tail_x);
	const long double square_y = square_quad(y, &tail_y);
	return sqrtl(((tail_y + tail_x) + square_y) + square_x);
}

long double hypotl(long double x, long double y)
{
	union binary128 ux = { .value = x }, uy = { .value = y };
	const uint64_t magnitude_mask = UINT64_C(0x7fffffffffffffff);
	ux.words[1] &= magnitude_mask;
	uy.words[1] &= magnitude_mask;
	if ((ux.words[1] >> 48) < (uy.words[1] >> 48))
	{
		const union binary128 swap = ux;
		ux = uy;
		uy = swap;
	}
	x = ux.value;
	y = uy.value;
	const unsigned ex = ux.words[1] >> 48;
	const unsigned ey = uy.words[1] >> 48;
	if (ex == 2 * LDBL_MAX_EXP - 1)
	{
		const uint64_t infinity = UINT64_C(0x7fff000000000000);
		if ((ux.words[1] == infinity && ux.words[0] == 0) || (uy.words[1] == infinity && uy.words[0] == 0))
			return INFINITY;
		return x + y;
	}
	if ((uy.words[1] | uy.words[0]) == 0 || ex - ey > LDBL_MANT_DIG)
		return x;
	const unsigned bias = LDBL_MAX_EXP - 1;
	if (ex > bias + 8000)
		return math_quad_overflow(norm_quad(x * 0x1p-10000L, y * 0x1p-10000L) * 0x1p10000L);
	if (ey < bias - 8000)
		return norm_quad(x * 0x1p10000L, y * 0x1p10000L) * 0x1p-10000L;
	return norm_quad(x, y);
}
