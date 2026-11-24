#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

struct long_double_words {
    uint64_t low;
    uint64_t high;
};

static_assert(FLT_RADIX == 2);
static_assert(FLT_MANT_DIG == 24 && FLT_MAX_EXP == 128 && sizeof(float) == sizeof(uint32_t));
static_assert(DBL_MANT_DIG == 53 && DBL_MAX_EXP == 1024 && sizeof(double) == sizeof(uint64_t));
static_assert(LDBL_MANT_DIG == 113 && LDBL_MAX_EXP == 16384 && sizeof(long double) == sizeof(struct long_double_words));
static_assert(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);

int canonicalizef(float *output, const float *input)
{
    uint32_t bits;
    memcpy(&bits, input, sizeof(bits));
    if ((bits & UINT32_C(0x7fffffff)) > UINT32_C(0x7f800000))
        bits |= UINT32_C(0x00400000);
    memcpy(output, &bits, sizeof(bits));
    return 0;
}

int canonicalize(double *output, const double *input)
{
    uint64_t bits;
    memcpy(&bits, input, sizeof(bits));
    if ((bits & UINT64_C(0x7fffffffffffffff)) > UINT64_C(0x7ff0000000000000))
        bits |= UINT64_C(0x0008000000000000);
    memcpy(output, &bits, sizeof(bits));
    return 0;
}

int canonicalizel(long double *output, const long double *input)
{
    struct long_double_words bits;
    memcpy(&bits, input, sizeof(bits));
    const uint64_t magnitude = bits.high & UINT64_C(0x7fffffffffffffff);
    const uint64_t infinity = UINT64_C(0x7fff000000000000);
    if (magnitude > infinity || (magnitude == infinity && bits.low != 0))
        bits.high |= UINT64_C(0x0000800000000000);
    memcpy(output, &bits, sizeof(bits));
    return 0;
}
