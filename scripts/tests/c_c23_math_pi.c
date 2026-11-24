#include <math.h>

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
	return 0;
}
