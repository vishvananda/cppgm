#include <errno.h>
#include <limits.h>
#include <stddef.h>
#include <uchar.h>

// WASI SDK 34 uses this word for mbsinit and sets bit 31 for an
// incomplete multibyte input character. Pending UTF-8 output uses bit 30
// with bit 31 clear. The count occupies bits 24-25 and the scalar bits 0-20.
static_assert(offsetof(mbstate_t, __opaque1) == 0);
static_assert(sizeof(((mbstate_t*)0)->__opaque1) * CHAR_BIT == 32);

enum
{
	remaining_shift = 24,
	marked_state = 1U << 30,
	scalar_mask = 0x1fffff
};

static size_t encoding_error(mbstate_t* state)
{
	state->__opaque1 = 0;
	errno = EILSEQ;
	return (size_t)-1;
}

size_t mbrtoc8(char8_t* restrict output, const char* restrict input, size_t count, mbstate_t* restrict state)
{
	static mbstate_t internal_state;
	if (!state)
		state = &internal_state;
	if (!input)
	{
		output = nullptr;
		input = "";
		count = 1;
	}
	unsigned saved = state->__opaque1;
	if ((saved & (3U << 30)) == marked_state)
	{
		unsigned remaining = ((saved >> remaining_shift) & 3U) - 1;
		unsigned scalar = saved & scalar_mask;
		if (output)
			*output = 0x80U | ((scalar >> (6 * remaining)) & 0x3fU);
		state->__opaque1 = remaining ? marked_state | (remaining << remaining_shift) | scalar : 0;
		return (size_t)-3;
	}
	if (!saved && count)
	{
		unsigned char first = *input;
		if (first < 0x80U)
		{
			if (output)
				*output = first;
			return first != 0;
		}
	}
	char32_t scalar;
	size_t consumed = mbrtoc32(&scalar, input, count, state);
	if (consumed == (size_t)-1 || consumed == (size_t)-2)
		return consumed;
	if (scalar > 0x10ffffU || (scalar >= 0xd800U && scalar <= 0xdfffU))
		return encoding_error(state);
	if (scalar < 0x80U)
	{
		if (output)
			*output = scalar;
		return consumed;
	}
	unsigned remaining = scalar < 0x800U ? 1 : scalar < 0x10000U ? 2 : 3;
	unsigned prefix = remaining == 1 ? 0xc0U : remaining == 2 ? 0xe0U : 0xf0U;
	if (output)
		*output = prefix | (scalar >> (6 * remaining));
	state->__opaque1 = marked_state | (remaining << remaining_shift) | scalar;
	return consumed;
}

size_t c8rtomb(char* restrict output, char8_t unit, mbstate_t* restrict state)
{
	static mbstate_t internal_state;
	if (!state)
		state = &internal_state;
	unsigned saved = state->__opaque1;
	if (!output)
		return saved ? encoding_error(state) : 1;
	if (!saved)
	{
		if (unit < 0x80U)
		{
			*output = unit;
			return 1;
		}
		if (unit < 0xc2U || unit > 0xf4U)
			return encoding_error(state);
		unsigned remaining = unit < 0xe0U ? 1 : unit < 0xf0U ? 2 : 3;
		state->__opaque1 = marked_state | (remaining << remaining_shift) | unit;
		return 0;
	}
	if (unit < 0x80U || unit > 0xbfU)
		return encoding_error(state);
	unsigned remaining = (saved >> remaining_shift) & 3U;
	unsigned scalar = saved & scalar_mask;
	if (saved & marked_state)
	{
		if ((scalar == 0xe0U && unit < 0xa0U) || (scalar == 0xedU && unit >= 0xa0U) ||
			(scalar == 0xf0U && unit < 0x90U) || (scalar == 0xf4U && unit >= 0x90U))
			return encoding_error(state);
		scalar &= 0x7fU >> (remaining + 1);
	}
	scalar = (scalar << 6) | (unit & 0x3fU);
	if (--remaining)
	{
		state->__opaque1 = (remaining << remaining_shift) | scalar;
		return 0;
	}
	state->__opaque1 = 0;
	return c32rtomb(output, scalar, state);
}
