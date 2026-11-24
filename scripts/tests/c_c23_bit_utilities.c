#include <limits.h>
#include <stdbit.h>

#if __STDC_VERSION_STDBIT_H__ != 202311L
#error unexpected bit utilities header version
#endif

#define CHECK(T, W) \
	do \
	{ \
		volatile T value = 0x90; \
		volatile T smaller = 0x50; \
		volatile T zero = 0; \
		if (stdc_leading_zeros(value) != (W) - 8 || stdc_leading_ones(value) != ((W) == 8) || \
			stdc_trailing_zeros(value) != 4 || stdc_trailing_ones(value) != 0 || \
			stdc_first_leading_zero(value) != ((W) == 8 ? 2 : 1) || stdc_first_leading_one(value) != (W) - 7 || \
			stdc_first_trailing_zero(value) != 1 || stdc_first_trailing_one(value) != 5 || \
			stdc_count_zeros(value) != (W) - 2 || stdc_count_ones(value) != 2 || stdc_has_single_bit(value) || \
			stdc_bit_width(value) != 8 || stdc_bit_floor(value) != 128 || stdc_bit_ceil(smaller) != 128) \
			return 1; \
		if (stdc_leading_zeros(zero) != (W) || stdc_trailing_zeros(zero) != (W) || \
			stdc_first_leading_one(zero) != 0 || stdc_first_trailing_one(zero) != 0 || stdc_bit_width(zero) != 0 || \
			stdc_bit_floor(zero) != 0 || stdc_bit_ceil(zero) != 1) \
			return 2; \
	} while (0)

int main(void)
{
	CHECK(unsigned char, UCHAR_WIDTH);
	CHECK(unsigned short, USHRT_WIDTH);
	CHECK(unsigned int, UINT_WIDTH);
	CHECK(unsigned long, ULONG_WIDTH);
	CHECK(unsigned long long, ULLONG_WIDTH);

	unsigned int (*leading)(unsigned char) = &stdc_leading_zeros_uc;
	if (leading(1) != UCHAR_WIDTH - 1)
		return 3;
	return 0;
}
