#ifndef __CPPGM_WASI_C23_MATH_H
#define __CPPGM_WASI_C23_MATH_H

#include_next <math.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_MATH_H__ 202311L

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
long double acospil(long double);
double asinpi(double);
float asinpif(float);
long double asinpil(long double);
double atanpi(double);
float atanpif(float);
long double atanpil(long double);
double atan2pi(double, double);
float atan2pif(float, float);
long double atan2pil(long double, long double);
double cospi(double);
float cospif(float);
long double cospil(long double);
double sinpi(double);
float sinpif(float);
long double sinpil(long double);
double tanpi(double);
float tanpif(float);
long double tanpil(long double);

double exp10(double);
float exp10f(float);
long double exp10l(long double);
double exp10m1(double);
float exp10m1f(float);
long double exp10m1l(long double);
double exp2m1(double);
float exp2m1f(float);
long double exp2m1l(long double);
double log10p1(double);
float log10p1f(float);
long double log10p1l(long double);
double log2p1(double);
float log2p1f(float);
long double log2p1l(long double);
double logp1(double);
float logp1f(float);
long double logp1l(long double);
double compoundn(double, long long);
float compoundnf(float, long long);
long double compoundnl(long double, long long);
double pown(double, long long);
float pownf(float, long long);
long double pownl(long double, long long);
double powr(double, double);
float powrf(float, float);
long double powrl(long double, long double);
double rootn(double, long long);
float rootnf(float, long long);
long double rootnl(long double, long long);

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

float fadd(double, double);
float faddl(long double, long double);
double daddl(long double, long double);
float fsub(double, double);
float fsubl(long double, long double);
double dsubl(long double, long double);
float fmul(double, double);
float fmull(long double, long double);
double dmull(long double, long double);
float fdiv(double, double);
float fdivl(long double, long double);
double ddivl(long double, long double);
float ffma(double, double, double);
float ffmal(long double, long double, long double);
double dfmal(long double, long double, long double);
float fsqrt(double);
float fsqrtl(long double);
double dsqrtl(long double);
#endif

#endif
