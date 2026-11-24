#include <fenv.h>

/* The WASI SDK supports only round-to-nearest and no exception flags. */
static_assert(FE_ALL_EXCEPT == 0);

int fesetexcept(int excepts)
{
	return excepts != 0;
}

int fetestexceptflag(const fexcept_t* flag, int excepts)
{
	(void)flag;
	(void)excepts;
	return 0;
}

int fegetmode(femode_t* mode)
{
	mode->__round = FE_TONEAREST;
	return 0;
}

int fesetmode(const femode_t* mode)
{
	(void)mode;
	return 0;
}
