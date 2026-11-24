#ifndef __CPPGM_FREESTANDING_STDLIB_H
#define __CPPGM_FREESTANDING_STDLIB_H

#ifdef __wasi__
#include_next <stdlib.h>
#else
#include <stddef.h>
#endif

#if !defined(__wasi__) || (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L)
#ifdef __cplusplus
extern "C"
#endif
	size_t memalignment(const void*);
#endif

#endif
