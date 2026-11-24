#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
    int count = 0;
    if (!iscanonical((float)++count) || count != 1) return 1;
    if (!iszero(-0.0) || !iszero(0.0f) || iszero(NAN) || iszero(INFINITY)) return 2;
    if (!issubnormal(FLT_TRUE_MIN) || !issubnormal(-DBL_TRUE_MIN) || !issubnormal(LDBL_TRUE_MIN) ||
        issubnormal(0.0) || issubnormal(DBL_MIN) || issubnormal(NAN)) return 3;
    if (issignaling(NAN) || issignaling(INFINITY) || issignaling(2.0L)) return 4;

    int (*volatile quiet_float)(float *, const float *) = canonicalizef;
    int (*volatile quiet_double)(double *, const double *) = canonicalize;
    int (*volatile quiet_long_double)(long double *, const long double *) = canonicalizel;
    uint32_t float_bits = UINT32_C(0xff800001);
    uint64_t double_bits = UINT64_C(0x7ff0000000000001);
    float f, quiet_f;
    double d;
    memcpy(&f, &float_bits, sizeof(f));
    memcpy(&d, &double_bits, sizeof(d));
    if (!issignaling(f) || !issignaling(d)) return 5;
    if (quiet_float(&quiet_f, &f) != 0 || !iscanonical(quiet_f) || !isnan(quiet_f) ||
        issignaling(quiet_f) || !issignaling(f)) return 6;
    if (quiet_double(&d, &d) != 0 || !iscanonical(d) || !isnan(d) || issignaling(d)) return 7;

    long double ld = -0.0L;
    if (quiet_long_double(&ld, &ld) != 0 || !iszero(ld) || !signbit(ld)) return 8;
#if LDBL_MANT_DIG == 113 && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    uint64_t long_double_bits[2] = {1, UINT64_C(0x7fff000000000000)};
    memcpy(&ld, long_double_bits, sizeof(ld));
    if (!issignaling(ld)) return 9;
    if (quiet_long_double(&ld, &ld) != 0 || !iscanonical(ld) || !isnan(ld) || issignaling(ld)) return 10;
#endif
    return 0;
}
