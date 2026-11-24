#ifndef __CPPGM_WASI_C23_STDIO_H
#define __CPPGM_WASI_C23_STDIO_H

#include_next <stdio.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
int printf(const char* restrict, ...) __asm__("__cppgm_c23_printf");
int fprintf(FILE* restrict, const char* restrict, ...) __asm__("__cppgm_c23_fprintf");
int sprintf(char* restrict, const char* restrict, ...) __asm__("__cppgm_c23_sprintf");
int snprintf(char* restrict, size_t, const char* restrict, ...) __asm__("__cppgm_c23_snprintf");
int vprintf(const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vprintf");
int vfprintf(FILE* restrict, const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vfprintf");
int vsprintf(char* restrict, const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vsprintf");
int vsnprintf(char* restrict, size_t, const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vsnprintf");
int scanf(const char* restrict, ...) __asm__("__cppgm_c23_scanf");
int fscanf(FILE* restrict, const char* restrict, ...) __asm__("__cppgm_c23_fscanf");
int sscanf(const char* restrict, const char* restrict, ...) __asm__("__cppgm_c23_sscanf");
int vscanf(const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vscanf");
int vfscanf(FILE* restrict, const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vfscanf");
int vsscanf(const char* restrict, const char* restrict, __isoc_va_list) __asm__("__cppgm_c23_vsscanf");
#endif

#endif
