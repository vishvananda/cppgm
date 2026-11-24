#include <float.h>
#include <math.h>

static int long_double_angles(void)
{
	volatile long double zero = -0.0L;
	volatile long double one = 1.0L;
	volatile long double half = 0.5L;
	volatile long double infinity = INFINITY;
	if (acospil(-one) != 1.0L || acospil(zero) != 0.5L || acospil(one) != 0.0L || asinpil(-one) != -0.5L ||
		!signbit(asinpil(zero)) || atanpil(-infinity) != -0.5L)
		return 6;
	if (atan2pil(zero, -one) != -1.0L || atan2pil(infinity, -infinity) != 0.75L ||
		atan2pil(-infinity, infinity) != -0.25L || !signbit(atan2pil(zero, one)))
		return 7;
	const long double cosine = cospil(-half);
	if (cosine != 0.0L || signbit(cosine) || sinpil(-half) != -1.0L || tanpil(half) != INFINITY ||
		tanpil(one + half) != -INFINITY || !signbit(tanpil(one)) || signbit(tanpil(-one)) || !signbit(sinpil(-one)))
		return 8;
	if (!isnan(sinpil(infinity)) || !isnan(cospil(-infinity)) || !isnan(tanpil(infinity)))
		return 9;
#if LDBL_MANT_DIG == 113
	volatile long double even_integer = 0x1p112L;
	volatile long double even_half = 0x1p111L;
	const long double odd_integer = even_integer + 1.0L;
	const long double half_integer = even_half + 0.5L;
	if (cospil(odd_integer) != -1.0L || !signbit(tanpil(odd_integer)) || sinpil(half_integer) != 1.0L ||
		tanpil(half_integer) != INFINITY || cospil(even_integer) != 1.0L)
		return 10;
	volatile long double quarter = 1.25L;
	volatile long double increment = 0x1p-64L;
	const long double shifted = quarter + increment;
	if (!(sinpil(shifted) < sinpil(quarter) && cospil(shifted) > cospil(quarter) && tanpil(shifted) > 1.0L))
		return 11;
#endif
	return 0;
}

int main(void)
{
	volatile double zero = -0.0;
	volatile double one = 1.0;
	volatile double half = 0.5;
	volatile double quarter = 0.25;
	volatile float zerof = -0.0f;
	volatile float onef = 1.0f;
	volatile float halff = 0.5f;
	volatile float quarterf = 0.25f;

	if (acospi(-one) != 1.0 || acospi(zero) != 0.5 || asinpi(-one) != -0.5 || atanpi(-one) != -0.25 ||
		atan2pi(zero, -one) != -1.0 || atan2pi(one, -one) != 0.75)
		return 1;
	if (acospif(-onef) != 1.0f || acospif(zerof) != 0.5f || asinpif(-onef) != -0.5f || atanpif(-onef) != -0.25f ||
		atan2pif(zerof, -onef) != -1.0f || atan2pif(onef, -onef) != 0.75f)
		return 2;
	if (cospi(one) != -1.0 || cospi(half) != 0.0 || sinpi(-half) != -1.0 || cospif(onef) != -1.0f ||
		cospif(halff) != 0.0f || sinpif(-halff) != -1.0f || !(fabs(tanpi(-quarter) + 1.0) <= 0x1p-52) ||
		!(fabsf(tanpif(-quarterf) + 1.0f) <= 0x1p-23f))
		return 3;
	if (!signbit(asinpi(zero)) || !signbit(atanpi(zero)) || !signbit(sinpi(zero)) || !signbit(tanpi(zero)) ||
		!signbit(asinpif(zerof)) || !signbit(atanpif(zerof)) || !signbit(sinpif(zerof)) || !signbit(tanpif(zerof)))
		return 4;
	if (!isnan(acospi(one + half)) || !isnan(asinpif(onef + halff)) || !isnan(cospi(one / zero)) ||
		!isnan(sinpif(onef / zerof)))
		return 5;
	return long_double_angles();
}
