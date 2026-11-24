#include <float.h>
#include <math.h>

int main(void)
{
#if LDBL_MANT_DIG == 113
	volatile long double epsilon = 0x1p-100L;
#else
	volatile long double epsilon = 0x1p-40L;
#endif
	volatile long double half = 0.5L;
	volatile long double exact = 1.0L + epsilon;
	volatile long double above_tie = 1.25L + epsilon;
	volatile long double tie = 1.25L;
	volatile long double odd_tie = 1.75L;
	int quotient = 0;
	if (remquol(exact, half, &quotient) != epsilon || (quotient & 7) != 2)
		return 1;
	if (remquol(above_tie, half, &quotient) != -0.25L + epsilon || (quotient & 7) != 3 ||
		remainderl(above_tie, half) != -0.25L + epsilon)
		return 2;
	if (remquol(tie, half, &quotient) != 0.25L || (quotient & 7) != 2 || remquol(odd_tie, -half, &quotient) != -0.25L ||
		quotient >= 0 || ((-quotient) & 7) != 4)
		return 3;
	if (remquol(-above_tie, half, &quotient) != 0.25L - epsilon || quotient >= 0 || ((-quotient) & 7) != 3)
		return 4;
	volatile long double multiple = 12.0L;
	if (!signbit(remquol(-multiple, half, &quotient)) || (quotient & 7) != 0)
		return 5;
	volatile long double large = LDBL_MAX;
	if (remquol(large, large, &quotient) != 0.0L || (quotient & 7) != 1)
		return 6;
	volatile long double tiny = scalbnl(1.0L, LDBL_MIN_EXP - LDBL_MANT_DIG);
	if (remquol(3 * tiny, 2 * tiny, &quotient) != -tiny || (quotient & 7) != 2)
		return 7;
	return 0;
}
