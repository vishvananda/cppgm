#include <limits.h>
#include <stddef.h>
#include <stdint.h>

_Static_assert(CHAR_BIT == 8 && SCHAR_MAX == 127 && UCHAR_MAX == 255, "byte limits");
_Static_assert(LLONG_MAX == 9223372036854775807LL && LLONG_MIN == -LLONG_MAX - 1, "long long limits");
_Static_assert(INT8_MIN == -128 && UINT16_MAX == 65535 && INT32_MAX == INT_MAX, "exact-width limits");
_Static_assert(INTMAX_MIN == -INTMAX_MAX - 1 && UINTMAX_MAX == UINTMAX_C(18446744073709551615), "maximum-width limits");
_Static_assert(__builtin_types_compatible_p(__typeof__(INT64_C(1)), int_least64_t), "signed constant type");
_Static_assert(__builtin_types_compatible_p(__typeof__(UINT64_C(1)), uint_least64_t), "unsigned constant type");
_Static_assert(sizeof(uintptr_t) == sizeof(void *) && SIZE_MAX == (size_t)-1, "pointer-size limits");
_Static_assert(PTRDIFF_MAX > 0 && PTRDIFF_MIN == -PTRDIFF_MAX - 1, "pointer difference limits");
_Static_assert(SIG_ATOMIC_MIN <= -127 && SIG_ATOMIC_MAX >= 127, "signal limits");

#ifdef __APPLE__
_Static_assert(__builtin_types_compatible_p(int64_t, long long), "Darwin exact-width integer");
_Static_assert(__builtin_types_compatible_p(intmax_t, long), "Darwin maximum-width integer");
#endif

int main(void) { return 0; }
