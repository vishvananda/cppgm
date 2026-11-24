#include <limits.h>
#include <stdbit.h>

#if __STDC_VERSION_STDBIT_H__ != 202311L
#error unexpected bit utilities header version
#endif

static_assert(sizeof(size_t) >= sizeof(unsigned char));
static_assert(sizeof(int32_t) * CHAR_BIT == 32);
static_assert(sizeof(uint_least32_t) * CHAR_BIT >= 32);

#define GENERIC(name, suffix) stdc_##name
#define TYPED(name, suffix) (stdc_##name##_##suffix)

#define CHECK(T, W, BIT, suffix) \
	do \
	{ \
		volatile T value = 0x90; \
		volatile T smaller = 0x50; \
		volatile T zero = 0; \
		if (BIT(leading_zeros, suffix)(value) != (W) - 8 || BIT(leading_ones, suffix)(value) != ((W) == 8) || \
			BIT(trailing_zeros, suffix)(value) != 4 || BIT(trailing_ones, suffix)(value) != 0 || \
			BIT(first_leading_zero, suffix)(value) != ((W) == 8 ? 2 : 1) || \
			BIT(first_leading_one, suffix)(value) != (W) - 7 || BIT(first_trailing_zero, suffix)(value) != 1 || \
			BIT(first_trailing_one, suffix)(value) != 5 || BIT(count_zeros, suffix)(value) != (W) - 2 || \
			BIT(count_ones, suffix)(value) != 2 || BIT(has_single_bit, suffix)(value) || \
			BIT(bit_width, suffix)(value) != 8 || BIT(bit_floor, suffix)(value) != 128 || \
			BIT(bit_ceil, suffix)(smaller) != 128) \
			return 1; \
		if (BIT(leading_zeros, suffix)(zero) != (W) || BIT(trailing_zeros, suffix)(zero) != (W) || \
			BIT(first_leading_one, suffix)(zero) != 0 || BIT(first_trailing_one, suffix)(zero) != 0 || \
			BIT(bit_width, suffix)(zero) != 0 || BIT(bit_floor, suffix)(zero) != 0 || \
			BIT(bit_ceil, suffix)(zero) != 1) \
			return 2; \
	} while (0)

#define CHECK_WIDTH(type, suffix) \
	CHECK(type, sizeof(type) * CHAR_BIT, GENERIC, suffix); \
	CHECK(type, sizeof(type) * CHAR_BIT, TYPED, suffix)

int main(void)
{
	CHECK_WIDTH(unsigned char, uc);
	CHECK_WIDTH(unsigned short, us);
	CHECK_WIDTH(unsigned int, ui);
	CHECK_WIDTH(unsigned long, ul);
	CHECK_WIDTH(unsigned long long, ull);

	unsigned int (*leading)(unsigned char) = &stdc_leading_zeros_uc;
	if (leading(1) != CHAR_BIT - 1)
		return 3;
	unsigned short one = 1;
	const unsigned char* bytes = (const unsigned char*)&one;
	if (__STDC_ENDIAN_LITTLE__ == __STDC_ENDIAN_BIG__ ||
		__STDC_ENDIAN_NATIVE__ != (bytes[0] ? __STDC_ENDIAN_LITTLE__ : __STDC_ENDIAN_BIG__))
		return 4;
	return 0;
}
