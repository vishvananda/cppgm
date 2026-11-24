#include <tgmath.h>

#define HAS_TYPE(expr, type) _Generic((expr), type: 1, default: 0)

static_assert(HAS_TYPE(rsqrt(4), double));
static_assert(HAS_TYPE(rsqrt(4.0f), float));
static_assert(HAS_TYPE(rsqrt(4.0L), long double));
static_assert(HAS_TYPE(nextup(0.0f), float));
static_assert(HAS_TYPE(roundeven(1.5L), long double));
static_assert(HAS_TYPE(logp1(1), double));
static_assert(HAS_TYPE(exp10m1(2.0f), float));
static_assert(HAS_TYPE(exp2m1(3.0L), long double));
static_assert(HAS_TYPE(log10p1(99.0f), float));
static_assert(HAS_TYPE(log2p1(7.0L), long double));
static_assert(HAS_TYPE(llogb(4.0f), long));
static_assert(HAS_TYPE(fmaximum(1.0f, 2.0f), float));
static_assert(HAS_TYPE(fmaximum(1.0f, 2), double));
static_assert(HAS_TYPE(fminimum_mag_num(1.0f, 2.0L), long double));
static_assert(HAS_TYPE(fromfp(1.5f, FP_INT_TONEAREST, 8U), float));
static_assert(HAS_TYPE(ufromfpx(1.5L, FP_INT_TONEAREST, 8U), long double));
static_assert(HAS_TYPE(fadd(1.0f, 2.0f), float));
static_assert(HAS_TYPE(fadd(1.0L, 2.0f), float));
static_assert(HAS_TYPE(dadd(1.0f, 2.0f), double));

static float value(unsigned* count)
{
	++*count;
	return 4.0f;
}

int main(void)
{
	unsigned count = 0;
	if (!HAS_TYPE(fminimum(value(&count), 2), double) || count != 0)
		return 1;
	if (fminimum(value(&count), 5) != 4.0 || count != 1 || rsqrt(value(&count)) != 0.5f || count != 2)
		return 2;
	if (fromfp(value(&count), FP_INT_TOWARDZERO, 8U) != 4.0f || count != 3)
		return 3;
	volatile double middle = 0x1.000001p0;
	volatile long double low = 0x1p-120L;
	if (fadd(middle, low) != 0x1.000002p0f || ffma(middle, 1.0, low) != 0x1.000002p0f)
		return 4;
	if (fsub(value(&count), 2.0f) != 2.0f || fmul(2, 3) != 6.0f || fdiv(4, 2) != 2.0f || fsqrt(4.0L) != 2.0f ||
		count != 4)
		return 5;
	if (dadd(1.0f, 2) != 3.0 || dsub(3, 2.0) != 1.0 || dmul(2.0f, 3) != 6.0 || ddiv(4L, 2) != 2.0 ||
		dfma(1, 3.0, 2.0L) != 5.0 || dsqrt(4) != 2.0)
		return 6;
	float (*ordinary)(double, double) = fadd;
	if (ordinary(1.0, 2.0) != 3.0f || (fadd)(1.0, 2.0) != 3.0f)
		return 7;
	return 0;
}
