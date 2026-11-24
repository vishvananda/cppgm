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

#if defined(__wasi__) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
void free_sized(void*, size_t);
void free_aligned_sized(void*, size_t, size_t);

#define bsearch(key, base, length, size, compare) \
	((typeof(1 ? (base) : (void*)nullptr))(bsearch)((key), (base), (length), (size), (compare)))

#ifndef __CPPGM_LEGACY_INTEGER_CONVERSIONS
long strtol(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtol");
unsigned long strtoul(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoul");
long long strtoll(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoll");
unsigned long long strtoull(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoull");
#endif
#endif

#endif
