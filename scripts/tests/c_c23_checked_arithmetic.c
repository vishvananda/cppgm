#include <limits.h>
#include <stdckdint.h>

#if __STDC_VERSION_STDCKDINT_H__ != 202311L
#error unexpected checked arithmetic header version
#endif

int main(void)
{
	volatile unsigned long long large = 1ULL << 63;
	volatile long long minus_one = -1;
	long long wide;
	signed char narrow;
	unsigned long long uns;
	static_assert(_Generic(ckd_add(&narrow, 1, 2), bool: 1, default: 0));
	if (ckd_mul(&wide, large, minus_one) || wide != LLONG_MIN)
		return 1;
	if (!ckd_add(&narrow, minus_one, ULLONG_MAX) || narrow != -2)
		return 2;
	if (!ckd_sub(&uns, LLONG_MIN, ULLONG_MAX) || uns != (1ULL << 63) + 1)
		return 3;
	return 0;
}
