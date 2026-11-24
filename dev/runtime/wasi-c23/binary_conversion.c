// The fallback uses the SDK declarations and their original names.
#define __CPPGM_LEGACY_INTEGER_CONVERSIONS
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>

static bool binary_digit(unsigned value)
{
	return value == '0' || value == '1';
}

#define narrow_space(value) isspace((unsigned char)(value))
#define wide_space(value) iswspace((wint_t)(value))

// Keep the scanning code out of the wrappers' ordinary SDK paths.
#define DEFINE_BINARY_SCANNER(name, unit, space) \
	__attribute__((noinline)) static const unit* name##_subject(const unit* input) \
	{ \
		if (*input != '0') \
			while (space(*input)) \
				++input; \
		const unit* prefix = input + (*input == '-' || *input == '+'); \
		if (prefix[0] == '0' && (prefix[1] == 'b' || prefix[1] == 'B') && binary_digit(prefix[2])) \
			return input; \
		return nullptr; \
	} \
	static uintmax_t name##_value(const unit* digits, unit** end, uintmax_t limit, bool wrap_negative) \
	{ \
		uintmax_t value = 0; \
		bool overflow = false; \
		while (binary_digit(*digits)) \
		{ \
			unsigned bit = *digits++ - '0'; \
			if (value > (limit - bit) / 2) \
			{ \
				while (binary_digit(*digits)) \
					++digits; \
				value = limit; \
				errno = ERANGE; \
				overflow = true; \
				break; \
			} \
			value = 2 * value + bit; \
		} \
		if (end) \
			*end = (unit*)digits; \
		return wrap_negative && !overflow ? -value : value; \
	}

DEFINE_BINARY_SCANNER(narrow, char, narrow_space)
DEFINE_BINARY_SCANNER(wide, wchar_t, wide_space)

#define MAY_HAVE_BINARY_PREFIX(input, base) (((base) == 0 || (base) == 2) && (unsigned)*(input) - '1' > 8U)

#define DEFINE_SIGNED(name, prefix, suffix, unit, type, maximum) \
	type __cppgm_c23_##prefix##suffix(const unit* restrict input, unit** restrict end, int base) \
	{ \
		const unit* subject = MAY_HAVE_BINARY_PREFIX(input, base) ? name##_subject(input) : nullptr; \
		if (!subject) \
			return prefix##suffix(input, end, base); \
		bool negative = *subject == '-'; \
		const unit* digits = subject + 2 + (negative || *subject == '+'); \
		uintmax_t value = name##_value(digits, end, (uintmax_t)(maximum) + negative, false); \
		return negative && value ? -(type)(value - 1) - 1 : (type)value; \
	}

#define DEFINE_UNSIGNED(name, prefix, suffix, unit, type, maximum) \
	type __cppgm_c23_##prefix##suffix(const unit* restrict input, unit** restrict end, int base) \
	{ \
		const unit* subject = MAY_HAVE_BINARY_PREFIX(input, base) ? name##_subject(input) : nullptr; \
		if (!subject) \
			return prefix##suffix(input, end, base); \
		bool negative = *subject == '-'; \
		const unit* digits = subject + 2 + (negative || *subject == '+'); \
		return (type)name##_value(digits, end, maximum, negative); \
	}

#define DEFINE_CONVERSIONS(name, prefix, unit) \
	DEFINE_SIGNED(name, prefix, l, unit, long, LONG_MAX) \
	DEFINE_UNSIGNED(name, prefix, ul, unit, unsigned long, ULONG_MAX) \
	DEFINE_SIGNED(name, prefix, ll, unit, long long, LLONG_MAX) \
	DEFINE_UNSIGNED(name, prefix, ull, unit, unsigned long long, ULLONG_MAX) \
	DEFINE_SIGNED(name, prefix, imax, unit, intmax_t, INTMAX_MAX) \
	DEFINE_UNSIGNED(name, prefix, umax, unit, uintmax_t, UINTMAX_MAX)

DEFINE_CONVERSIONS(narrow, strto, char)
DEFINE_CONVERSIONS(wide, wcsto, wchar_t)
