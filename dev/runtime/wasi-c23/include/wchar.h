#ifndef __CPPGM_WASI_C23_WCHAR_H
#define __CPPGM_WASI_C23_WCHAR_H

#include_next <wchar.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__CPPGM_LEGACY_INTEGER_CONVERSIONS)
long wcstol(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstol");
unsigned long wcstoul(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoul");
long long wcstoll(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoll");
unsigned long long wcstoull(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoull");
#endif

#endif
