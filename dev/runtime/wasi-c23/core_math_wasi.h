#ifndef CPPGM_CORE_MATH_WASI_H
#define CPPGM_CORE_MATH_WASI_H

#include <fenv.h>

#if !defined(FE_ALL_EXCEPT) || FE_ALL_EXCEPT != 0 || !defined(FE_TONEAREST) || FE_TONEAREST != 0
#error CORE-MATH expects the WASI SDK floating-point environment
#endif

// The SDK always reports FE_TONEAREST and exposes no exception flags.
// These private values keep the upstream alternate-mode branches inactive.
#define FE_DOWNWARD (-1)
#define FE_UPWARD (-2)
#define FE_TOWARDZERO (-3)
#define FE_INVALID 0
#define FE_INEXACT 0
#define FE_UNDERFLOW 0
#define FE_OVERFLOW 0
#define FE_DIVBYZERO 0

#endif
