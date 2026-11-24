#ifndef __CPPGM_WASI_C23_INTTYPES_H
#define __CPPGM_WASI_C23_INTTYPES_H

#include_next <inttypes.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__CPPGM_LEGACY_INTEGER_CONVERSIONS)
intmax_t strtoimax(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoimax");
uintmax_t strtoumax(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoumax");
intmax_t wcstoimax(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoimax");
uintmax_t wcstoumax(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoumax");
#endif

#endif
