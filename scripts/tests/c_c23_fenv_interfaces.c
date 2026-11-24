#include <fenv.h>
#include <fenv.h>

#ifndef __wasm__
#pragma STDC FENV_ACCESS ON
#endif

static_assert(_Generic(FE_DFL_MODE, const femode_t*: 1, default: 0));

int main(void)
{
	int (*volatile set_exceptions)(int) = fesetexcept;
	int (*volatile test_saved)(const fexcept_t*, int) = fetestexceptflag;
	int (*volatile get_mode)(femode_t*) = fegetmode;
	int (*volatile set_mode)(const femode_t*) = fesetmode;
	fenv_t original;
	femode_t saved_mode;
	fexcept_t saved_flags;

	if (fegetenv(&original) != 0 || feclearexcept(FE_ALL_EXCEPT) != 0)
		return 1;
	if (set_exceptions(0) != 0 || fetestexcept(FE_ALL_EXCEPT) != 0)
		return 2;
	if (set_mode(FE_DFL_MODE) != 0 || fegetround() != FE_TONEAREST)
		return 3;
	if (get_mode(&saved_mode) != 0)
		return 4;

	int expected_flags = 0;
#ifdef FE_INVALID
	if (set_exceptions(FE_INVALID) != 0)
		return 5;
	expected_flags |= FE_INVALID;
#endif
#ifdef FE_INEXACT
	if (set_exceptions(FE_INEXACT) != 0)
		return 6;
	expected_flags |= FE_INEXACT;
#endif
	if (fegetexceptflag(&saved_flags, FE_ALL_EXCEPT) != 0)
		return 7;
	if (test_saved(&saved_flags, FE_ALL_EXCEPT) != expected_flags || test_saved(&saved_flags, 0) != 0)
		return 8;
#ifdef FE_INVALID
	if (test_saved(&saved_flags, FE_INVALID) != FE_INVALID)
		return 9;
#endif
#ifdef FE_DOWNWARD
	if (fesetround(FE_DOWNWARD) != 0 || fegetround() != FE_DOWNWARD)
		return 10;
#endif
	if (set_mode(&saved_mode) != 0 || fegetround() != FE_TONEAREST)
		return 11;
	if (fetestexcept(FE_ALL_EXCEPT) != expected_flags)
		return 12;
	if (feclearexcept(FE_ALL_EXCEPT) != 0 || fetestexcept(FE_ALL_EXCEPT) != 0)
		return 13;
	if (test_saved(&saved_flags, FE_ALL_EXCEPT) != expected_flags)
		return 14;
	return fesetenv(&original) != 0;
}
