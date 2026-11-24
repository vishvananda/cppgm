#ifndef __CPPGM_WASI_C23_SETJMP_H
#define __CPPGM_WASI_C23_SETJMP_H

#include_next <setjmp.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__STDC_VERSION_SETJMP_H__)
#define __STDC_VERSION_SETJMP_H__ 202311L
#endif

#endif
