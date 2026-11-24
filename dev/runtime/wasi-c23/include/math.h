#ifndef __CPPGM_WASI_C23_MATH_H
#define __CPPGM_WASI_C23_MATH_H

#include_next <math.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define FP_LLOGB0 (FP_ILOGB0 + 0L)
#define FP_LLOGBNAN (FP_ILOGBNAN + 0L)

#define iscanonical(value) ((void)(value), 1)
#define issignaling(value) ((int)__builtin_issignaling(value))
#define issubnormal(value) (fpclassify(value) == FP_SUBNORMAL)
#define iszero(value) (fpclassify(value) == FP_ZERO)

int canonicalize(double *, const double *);
int canonicalizef(float *, const float *);
int canonicalizel(long double *, const long double *);

double nextup(double);
float nextupf(float);
long double nextupl(long double);
double nextdown(double);
float nextdownf(float);
long double nextdownl(long double);

long llogb(double);
long llogbf(float);
long llogbl(long double);

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
