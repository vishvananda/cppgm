#ifndef __CPPGM_WASI_C23_COMPLEX_H
#define __CPPGM_WASI_C23_COMPLEX_H

#include_next <complex.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#undef CMPLX
#undef CMPLXF
#undef CMPLXL
#define CMPLX(x, y) __builtin_complex((double)(x), (double)(y))
#define CMPLXF(x, y) __builtin_complex((float)(x), (float)(y))
#define CMPLXL(x, y) __builtin_complex((long double)(x), (long double)(y))
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_COMPLEX_H__ 202311L
#endif

#endif
