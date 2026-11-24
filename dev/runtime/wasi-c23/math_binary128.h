#ifndef CPPGM_WASI_MATH_BINARY128_H
#define CPPGM_WASI_MATH_BINARY128_H

struct math_split
{
	long double high;
	long double low;
};

__attribute__((visibility("hidden"))) struct math_split __cppgm_wasi_log_split(long double, long double);
__attribute__((visibility("hidden"))) long double __cppgm_wasi_exp_split(long double, long double);
__attribute__((visibility("hidden"))) long double __cppgm_wasi_exp_half(long double);

// WASI SDK binary128 kernels for an angle with a separate residual.
__attribute__((visibility("hidden"))) long double __sinl(long double, long double, int);
__attribute__((visibility("hidden"))) long double __cosl(long double, long double);
__attribute__((visibility("hidden"))) long double __tanl(long double, long double, int);

#endif
