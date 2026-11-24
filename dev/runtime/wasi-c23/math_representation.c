#include <limits.h>
#include <math.h>

double nextup(double value)
{
	return nextafter(value, (double)INFINITY);
}

float nextupf(float value)
{
	return nextafterf(value, INFINITY);
}

long double nextupl(long double value)
{
	return nextafterl(value, (long double)INFINITY);
}

double nextdown(double value)
{
	return nextafter(value, -(double)INFINITY);
}

float nextdownf(float value)
{
	return nextafterf(value, -INFINITY);
}

long double nextdownl(long double value)
{
	return nextafterl(value, -(long double)INFINITY);
}

static_assert(INT_MAX == LONG_MAX && INT_MIN == LONG_MIN);

long llogb(double value)
{
	return ilogb(value);
}

long llogbf(float value)
{
	return ilogbf(value);
}

long llogbl(long double value)
{
	return ilogbl(value);
}
