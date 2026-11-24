#ifndef __CPPGM_WASI_C23_FENV_H
#define __CPPGM_WASI_C23_FENV_H

#include_next <fenv.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_FENV_H__ 202311L

typedef struct
{
	int __round;
} femode_t;
#define FE_DFL_MODE ((const femode_t*)-1)

int fesetexcept(int);
int fetestexceptflag(const fexcept_t*, int);
int fegetmode(femode_t*);
int fesetmode(const femode_t*);
#endif

#endif
