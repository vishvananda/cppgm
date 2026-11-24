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
#endif

#endif
