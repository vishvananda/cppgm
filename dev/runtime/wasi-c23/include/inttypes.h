#ifndef __CPPGM_WASI_C23_INTTYPES_H
#define __CPPGM_WASI_C23_INTTYPES_H

#include_next <inttypes.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__CPPGM_LEGACY_INTEGER_CONVERSIONS)
intmax_t strtoimax(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoimax");
uintmax_t strtoumax(const char* restrict, char** restrict, int) __asm__("__cppgm_c23_strtoumax");
intmax_t wcstoimax(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoimax");
uintmax_t wcstoumax(const wchar_t* restrict, wchar_t** restrict, int) __asm__("__cppgm_c23_wcstoumax");
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_INTTYPES_H__ 202311L

#define PRIb8 "w8b"
#define PRIb16 "w16b"
#define PRIb32 "w32b"
#define PRIb64 "w64b"
#define PRIbLEAST8 "w8b"
#define PRIbLEAST16 "w16b"
#define PRIbLEAST32 "w32b"
#define PRIbLEAST64 "w64b"
#define PRIbFAST8 "wf8b"
#define PRIbFAST16 "wf16b"
#define PRIbFAST32 "wf32b"
#define PRIbFAST64 "wf64b"
#define PRIbMAX "jb"
#define PRIbPTR "lb"

#define PRIB8 "w8B"
#define PRIB16 "w16B"
#define PRIB32 "w32B"
#define PRIB64 "w64B"
#define PRIBLEAST8 "w8B"
#define PRIBLEAST16 "w16B"
#define PRIBLEAST32 "w32B"
#define PRIBLEAST64 "w64B"
#define PRIBFAST8 "wf8B"
#define PRIBFAST16 "wf16B"
#define PRIBFAST32 "wf32B"
#define PRIBFAST64 "wf64B"
#define PRIBMAX "jB"
#define PRIBPTR "lB"

#define SCNb8 "w8b"
#define SCNb16 "w16b"
#define SCNb32 "w32b"
#define SCNb64 "w64b"
#define SCNbLEAST8 "w8b"
#define SCNbLEAST16 "w16b"
#define SCNbLEAST32 "w32b"
#define SCNbLEAST64 "w64b"
#define SCNbFAST8 "wf8b"
#define SCNbFAST16 "wf16b"
#define SCNbFAST32 "wf32b"
#define SCNbFAST64 "wf64b"
#define SCNbMAX "jb"
#define SCNbPTR "lb"
#endif

#endif
