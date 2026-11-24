#include <errno.h>
#include <float.h>
#include <limits.h>
#include <math.h>

#define CHECK(name, T, prefix, suffix)                                                       \
static int name(void)                                                                       \
{                                                                                           \
    T (*volatile up)(T) = nextup##suffix;                                                    \
    T (*volatile down)(T) = nextdown##suffix;                                                \
    long (*volatile exponent)(T) = llogb##suffix;                                           \
    T tiny = prefix##_TRUE_MIN;                                                              \
    T largest = prefix##_MAX;                                                               \
    T infinity = INFINITY;                                                                   \
    T nan = NAN;                                                                             \
    errno = 0;                                                                              \
    if (up((T)-0.0) != tiny || down((T)0.0) != -tiny) return 1;                               \
    T negative_zero = up(-tiny);                                                            \
    T positive_zero = down(tiny);                                                           \
    if (negative_zero != 0 || !signbit(negative_zero) ||                                     \
        positive_zero != 0 || signbit(positive_zero)) return 2;                              \
    if (up(largest) != infinity || up(infinity) != infinity || down(infinity) != largest ||    \
        down(-largest) != -infinity || down(-infinity) != -infinity || up(-infinity) != -largest) \
        return 3;                                                                           \
    if (!isnan(up(nan)) || !isnan(down(nan)) || errno != 0) return 4;                           \
    if (exponent((T)-8) != 3 || exponent(tiny) != prefix##_MIN_EXP - prefix##_MANT_DIG ||       \
        exponent(largest) != prefix##_MAX_EXP - 1) return 5;                                  \
    if (exponent((T)0) != FP_LLOGB0 || exponent(infinity) != LONG_MAX ||                      \
        exponent(nan) != FP_LLOGBNAN) return 6;                                               \
    return 0;                                                                               \
}

CHECK(check_float, float, FLT, f)
CHECK(check_double, double, DBL, )
CHECK(check_long_double, long double, LDBL, l)

int main(void)
{
    int status = check_float();
    if (status) return 10 + status;
    status = check_double();
    if (status) return 20 + status;
    status = check_long_double();
    if (status) return 30 + status;
    return 0;
}
