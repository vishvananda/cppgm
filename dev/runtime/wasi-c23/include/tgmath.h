#ifndef __CPPGM_WASI_C23_TGMATH_H
#define __CPPGM_WASI_C23_TGMATH_H

#include_next <tgmath.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#ifdef __has_builtin
#if __has_builtin(__builtin_tgmath)
#define __CPPGM_TGMATH_BUILTIN 1
#endif
#endif

#ifdef __CPPGM_TGMATH_BUILTIN
// Expand the selection helpers as names, so nested calls enter the builtin directly.
#define __cppgm_tg_unary __builtin_tgmath
#define __cppgm_tg_binary __builtin_tgmath
#define __cppgm_tg_fromfp __builtin_tgmath
#define __cppgm_tg_narrow1 __builtin_tgmath
#define __cppgm_tg_narrow2 __builtin_tgmath
#define __cppgm_tg_narrow3 __builtin_tgmath
#undef __CPPGM_TGMATH_BUILTIN
#else
#define __cppgm_tg_real(f, d, l, x) _Generic((x), float: (f), long double: (l), default: (d))
#define __cppgm_tg_rank(x) _Generic((x), float: 0.0f, long double: 0.0L, default: 0.0)
#define __cppgm_tg_unary(f, d, l, x) __cppgm_tg_real(f, d, l, x)((x))
#define __cppgm_tg_binary(f, d, l, x, y) __cppgm_tg_real(f, d, l, __cppgm_tg_rank(x) + __cppgm_tg_rank(y))((x), (y))
#define __cppgm_tg_fromfp(f, d, l, x, direction, width) __cppgm_tg_real(f, d, l, x)((x), (direction), (width))
#define __cppgm_tg_narrow1(d, l, x) _Generic((x), long double: (l), default: (d))((x))
#define __cppgm_tg_narrow2(d, l, x, y) _Generic((x) + (y), long double: (l), default: (d))((x), (y))
#define __cppgm_tg_narrow3(d, l, x, y, z) _Generic((x) + (y) + (z), long double: (l), default: (d))((x), (y), (z))
#endif

#define exp10m1(x) __cppgm_tg_unary(exp10m1f, (exp10m1), exp10m1l, (x))
#define exp2m1(x) __cppgm_tg_unary(exp2m1f, (exp2m1), exp2m1l, (x))
#define llogb(x) __cppgm_tg_unary(llogbf, (llogb), llogbl, (x))
#define log10p1(x) __cppgm_tg_unary(log10p1f, (log10p1), log10p1l, (x))
#define log2p1(x) __cppgm_tg_unary(log2p1f, (log2p1), log2p1l, (x))
#define logp1(x) __cppgm_tg_unary(logp1f, (logp1), logp1l, (x))
#define nextdown(x) __cppgm_tg_unary(nextdownf, (nextdown), nextdownl, (x))
#define nextup(x) __cppgm_tg_unary(nextupf, (nextup), nextupl, (x))
#define roundeven(x) __cppgm_tg_unary(roundevenf, (roundeven), roundevenl, (x))
#define rsqrt(x) __cppgm_tg_unary(rsqrtf, (rsqrt), rsqrtl, (x))

#define fromfp(x, direction, width) __cppgm_tg_fromfp(fromfpf, (fromfp), fromfpl, (x), (direction), (width))
#define fromfpx(x, direction, width) __cppgm_tg_fromfp(fromfpxf, (fromfpx), fromfpxl, (x), (direction), (width))
#define ufromfp(x, direction, width) __cppgm_tg_fromfp(ufromfpf, (ufromfp), ufromfpl, (x), (direction), (width))
#define ufromfpx(x, direction, width) __cppgm_tg_fromfp(ufromfpxf, (ufromfpx), ufromfpxl, (x), (direction), (width))

#define fmaximum(x, y) __cppgm_tg_binary(fmaximumf, (fmaximum), fmaximuml, (x), (y))
#define fmaximum_mag(x, y) __cppgm_tg_binary(fmaximum_magf, (fmaximum_mag), fmaximum_magl, (x), (y))
#define fmaximum_num(x, y) __cppgm_tg_binary(fmaximum_numf, (fmaximum_num), fmaximum_numl, (x), (y))
#define fmaximum_mag_num(x, y) __cppgm_tg_binary(fmaximum_mag_numf, (fmaximum_mag_num), fmaximum_mag_numl, (x), (y))
#define fminimum(x, y) __cppgm_tg_binary(fminimumf, (fminimum), fminimuml, (x), (y))
#define fminimum_mag(x, y) __cppgm_tg_binary(fminimum_magf, (fminimum_mag), fminimum_magl, (x), (y))
#define fminimum_num(x, y) __cppgm_tg_binary(fminimum_numf, (fminimum_num), fminimum_numl, (x), (y))
#define fminimum_mag_num(x, y) __cppgm_tg_binary(fminimum_mag_numf, (fminimum_mag_num), fminimum_mag_numl, (x), (y))

#define fadd(x, y) __cppgm_tg_narrow2((fadd), faddl, (x), (y))
#define fsub(x, y) __cppgm_tg_narrow2((fsub), fsubl, (x), (y))
#define fmul(x, y) __cppgm_tg_narrow2((fmul), fmull, (x), (y))
#define fdiv(x, y) __cppgm_tg_narrow2((fdiv), fdivl, (x), (y))
#define ffma(x, y, z) __cppgm_tg_narrow3((ffma), ffmal, (x), (y), (z))
#define fsqrt(x) __cppgm_tg_narrow1((fsqrt), fsqrtl, (x))

#define dadd(x, y) daddl((x), (y))
#define dsub(x, y) dsubl((x), (y))
#define dmul(x, y) dmull((x), (y))
#define ddiv(x, y) ddivl((x), (y))
#define dfma(x, y, z) dfmal((x), (y), (z))
#define dsqrt(x) dsqrtl((x))
#endif

#endif
