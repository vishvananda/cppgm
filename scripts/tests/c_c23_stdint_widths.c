#include <stdint.h>
#include <limits.h>
#include <stddef.h>

#define CHECK_SIGNED(prefix, type) \
	static_assert(prefix##_WIDTH == sizeof(type) * CHAR_BIT); \
	static_assert(_Generic((prefix##_MIN), typeof(+(type)0): 1, default: 0)); \
	static_assert(_Generic((prefix##_MAX), typeof(+(type)0): 1, default: 0)); \
	static_assert((uintmax_t)prefix##_MAX == UINTMAX_MAX >> (UINTMAX_WIDTH - prefix##_WIDTH + 1)); \
	static_assert(prefix##_MIN == -prefix##_MAX - 1)
#define CHECK_UNSIGNED(prefix, type) \
	static_assert(prefix##_WIDTH == sizeof(type) * CHAR_BIT); \
	static_assert(_Generic((prefix##_MAX), typeof(+(type)0): 1, default: 0)); \
	static_assert((uintmax_t)prefix##_MAX == UINTMAX_MAX >> (UINTMAX_WIDTH - prefix##_WIDTH))
#define CHECK_WIDTHS(n) \
	CHECK_SIGNED(INT##n, int##n##_t); \
	CHECK_UNSIGNED(UINT##n, uint##n##_t); \
	CHECK_SIGNED(INT_LEAST##n, int_least##n##_t); \
	CHECK_UNSIGNED(UINT_LEAST##n, uint_least##n##_t); \
	CHECK_SIGNED(INT_FAST##n, int_fast##n##_t); \
	CHECK_UNSIGNED(UINT_FAST##n, uint_fast##n##_t); \
	static_assert(INT_LEAST##n##_WIDTH >= n && INT_FAST##n##_WIDTH >= n); \
	static_assert(UINT_LEAST##n##_WIDTH >= n && UINT_FAST##n##_WIDTH >= n)
#define CHECK_RANGE(prefix) \
	static_assert((uintmax_t)prefix##_MAX - (uintmax_t)prefix##_MIN == UINTMAX_MAX >> (UINTMAX_WIDTH - prefix##_WIDTH))

CHECK_WIDTHS(8);
CHECK_WIDTHS(16);
CHECK_WIDTHS(32);
CHECK_WIDTHS(64);
CHECK_SIGNED(INTMAX, intmax_t);
CHECK_UNSIGNED(UINTMAX, uintmax_t);
CHECK_SIGNED(INTPTR, intptr_t);
CHECK_UNSIGNED(UINTPTR, uintptr_t);
CHECK_SIGNED(PTRDIFF, ptrdiff_t);
CHECK_UNSIGNED(SIZE, size_t);
CHECK_RANGE(SIG_ATOMIC);
CHECK_RANGE(WCHAR);
CHECK_RANGE(WINT);
static_assert(WCHAR_WIDTH == sizeof(wchar_t) * CHAR_BIT);

int main(void)
{
	return 0;
}
