#ifndef __CPPGM_WASI_C23_WCHAR_H
#define __CPPGM_WASI_C23_WCHAR_H

#include_next <wchar.h>
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#include <__cppgm_search_result.h>
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__CPPGM_LEGACY_INTEGER_CONVERSIONS)
long wcstol(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstol");
unsigned long wcstoul(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoul");
long long wcstoll(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoll");
unsigned long long wcstoull(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoull");
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_WCHAR_H__ 202311L
#define WCHAR_WIDTH __WCHAR_WIDTH__

#define wcschr(s, c) ((__CPPGM_SEARCH_RESULT(s, wchar_t))(wcschr)((s), (c)))
#define wcspbrk(s, accept) ((__CPPGM_SEARCH_RESULT(s, wchar_t))(wcspbrk)((s), (accept)))
#define wcsrchr(s, c) ((__CPPGM_SEARCH_RESULT(s, wchar_t))(wcsrchr)((s), (c)))
#define wmemchr(s, c, n) ((__CPPGM_SEARCH_RESULT(s, wchar_t))(wmemchr)((s), (c), (n)))
#define wcsstr(s, needle) ((__CPPGM_SEARCH_RESULT(s, wchar_t))(wcsstr)((s), (needle)))

int wprintf(const wchar_t* restrict, ...) __asm__("__cppgm_c23_wprintf");
int fwprintf(FILE* restrict, const wchar_t* restrict, ...) __asm__("__cppgm_c23_fwprintf");
int swprintf(wchar_t* restrict, size_t, const wchar_t* restrict, ...) __asm__("__cppgm_c23_swprintf");
int vwprintf(const wchar_t* restrict, __isoc_va_list) __asm__("__cppgm_c23_vwprintf");
int vfwprintf(FILE* restrict, const wchar_t* restrict, __isoc_va_list) __asm__("__cppgm_c23_vfwprintf");
int vswprintf(wchar_t* restrict, size_t, const wchar_t* restrict, __isoc_va_list) __asm__("__cppgm_c23_vswprintf");
int wscanf(const wchar_t* restrict, ...) __asm__("__cppgm_c23_wscanf");
int fwscanf(FILE* restrict, const wchar_t* restrict, ...) __asm__("__cppgm_c23_fwscanf");
int swscanf(const wchar_t* restrict, const wchar_t* restrict, ...) __asm__("__cppgm_c23_swscanf");
int vwscanf(const wchar_t* restrict, __isoc_va_list) __asm__("__cppgm_c23_vwscanf");
int vfwscanf(FILE* restrict, const wchar_t* restrict, __isoc_va_list) __asm__("__cppgm_c23_vfwscanf");
int vswscanf(const wchar_t* restrict, const wchar_t* restrict, __isoc_va_list) __asm__("__cppgm_c23_vswscanf");
#endif

#endif
