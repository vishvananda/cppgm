#ifndef CPPGM_WASI_INTEGER_WIDTH_H
#define CPPGM_WASI_INTEGER_WIDTH_H

#include <stdint.h>

enum integer_width
{
	WIDTH_INVALID,
	WIDTH_CHAR,
	WIDTH_SHORT,
	WIDTH_INT,
	WIDTH_LLONG
};

/* The WASI SDK's minimum-width and exact-width types agree. The fast
   16-bit type uses int. Keep the runtime's variadic types tied to the SDK. */
static_assert(_Generic((int_fast8_t)0, signed char: 1, default: 0));
static_assert(_Generic((int_fast16_t)0, int: 1, default: 0));
static_assert(_Generic((int_fast32_t)0, int: 1, default: 0));
static_assert(_Generic((int_fast64_t)0, long long: 1, default: 0));
static_assert(_Generic((int_least8_t)0, signed char: 1, default: 0));
static_assert(_Generic((int_least16_t)0, short: 1, default: 0));
static_assert(_Generic((int_least32_t)0, int: 1, default: 0));
static_assert(_Generic((int_least64_t)0, long long: 1, default: 0));

static enum integer_width width_kind(int fast, int width)
{
	switch (width)
	{
	case 8:
		return WIDTH_CHAR;
	case 16:
		return fast ? WIDTH_INT : WIDTH_SHORT;
	case 32:
		return WIDTH_INT;
	case 64:
		return WIDTH_LLONG;
	default:
		return WIDTH_INVALID;
	}
}

static int integer_conversion(unsigned c)
{
	return c == 'b' || c == 'B' || c == 'd' || c == 'i' || c == 'n' || c == 'o' || c == 'u' || c == 'x' || c == 'X';
}

#endif
