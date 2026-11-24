#ifndef __CPPGM_WASI_C23_UCHAR_H
#define __CPPGM_WASI_C23_UCHAR_H

#include_next <uchar.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_UCHAR_H__ 202311L
typedef unsigned char char8_t;
size_t mbrtoc8(char8_t* restrict, const char* restrict, size_t, mbstate_t* restrict);
size_t c8rtomb(char* restrict, char8_t, mbstate_t* restrict);
#endif

#endif
