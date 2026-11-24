#ifndef __CPPGM_WASI_C23_MATH_H
#define __CPPGM_WASI_C23_MATH_H

#include_next <math.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define FP_LLOGB0 (FP_ILOGB0 + 0L)
#define FP_LLOGBNAN (FP_ILOGBNAN + 0L)

#define FP_INT_UPWARD 0
#define FP_INT_DOWNWARD 1
#define FP_INT_TOWARDZERO 2
#define FP_INT_TONEARESTFROMZERO 3
#define FP_INT_TONEAREST 4

#define iscanonical(value) ((void)(value), 1)
#define issignaling(value) ((int)__builtin_issignaling(value))
#define issubnormal(value) (fpclassify(value) == FP_SUBNORMAL)
#define iszero(value) (fpclassify(value) == FP_ZERO)

int canonicalize(double*, const double*);
int canonicalizef(float*, const float*);
int canonicalizel(long double*, const long double*);

double acospi(double);
float acospif(float);
double asinpi(double);
float asinpif(float);
double atanpi(double);
float atanpif(float);
double atan2pi(double, double);
float atan2pif(float, float);
double cospi(double);
float cospif(float);
double sinpi(double);
float sinpif(float);
double tanpi(double);
float tanpif(float);

double exp10m1(double);
float exp10m1f(float);
double exp2m1(double);
float exp2m1f(float);
double log10p1(double);
float log10p1f(float);
double log2p1(double);
float log2p1f(float);
double rsqrt(double);
float rsqrtf(float);
long double rsqrtl(long double);

double nextup(double);
float nextupf(float);
long double nextupl(long double);
double nextdown(double);
float nextdownf(float);
long double nextdownl(long double);

long llogb(double);
long llogbf(float);
long llogbl(long double);

double roundeven(double);
float roundevenf(float);
long double roundevenl(long double);

double fromfp(double, int, unsigned);
float fromfpf(float, int, unsigned);
long double fromfpl(long double, int, unsigned);
double ufromfp(double, int, unsigned);
float ufromfpf(float, int, unsigned);
long double ufromfpl(long double, int, unsigned);
double fromfpx(double, int, unsigned);
float fromfpxf(float, int, unsigned);
long double fromfpxl(long double, int, unsigned);
double ufromfpx(double, int, unsigned);
float ufromfpxf(float, int, unsigned);
long double ufromfpxl(long double, int, unsigned);

double fmaximum(double, double);
float fmaximumf(float, float);
long double fmaximuml(long double, long double);
double fminimum(double, double);
float fminimumf(float, float);
long double fminimuml(long double, long double);

double fmaximum_mag(double, double);
float fmaximum_magf(float, float);
long double fmaximum_magl(long double, long double);
double fminimum_mag(double, double);
float fminimum_magf(float, float);
long double fminimum_magl(long double, long double);

double fmaximum_num(double, double);
float fmaximum_numf(float, float);
long double fmaximum_numl(long double, long double);
double fminimum_num(double, double);
float fminimum_numf(float, float);
long double fminimum_numl(long double, long double);

double fmaximum_mag_num(double, double);
float fmaximum_mag_numf(float, float);
long double fmaximum_mag_numl(long double, long double);
double fminimum_mag_num(double, double);
float fminimum_mag_numf(float, float);
long double fminimum_mag_numl(long double, long double);
#endif

#endif
