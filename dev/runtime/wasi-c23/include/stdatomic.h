#ifndef __CPPGM_WASI_C23_STDATOMIC_H
#define __CPPGM_WASI_C23_STDATOMIC_H

#include_next <stdatomic.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__STDC_NO_ATOMICS__)
#define __STDC_VERSION_STDATOMIC_H__ 202311L
#endif

#endif
