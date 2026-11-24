#ifndef __CPPGM_WASI_C23_TIME_H
#define __CPPGM_WASI_C23_TIME_H

#include_next <time.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_TIME_H__ 202311L
struct tm* gmtime_r(const time_t* __restrict, struct tm* __restrict);
struct tm* localtime_r(const time_t* __restrict, struct tm* __restrict);
time_t timegm(struct tm*);
int timespec_getres(struct timespec*, int);
#endif

#endif
