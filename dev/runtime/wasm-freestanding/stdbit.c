#include <stdbit.h>

#define DEFINE_BIT_FUNCTION(result, type, suffix, name) \
	result stdc_##name##_##suffix(type value) \
	{ \
		return stdc_##name(value); \
	}

#define DEFINE_BIT_FUNCTIONS(type, suffix) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, leading_zeros) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, leading_ones) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, trailing_zeros) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, trailing_ones) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, first_leading_zero) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, first_leading_one) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, first_trailing_zero) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, first_trailing_one) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, count_zeros) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, count_ones) \
	DEFINE_BIT_FUNCTION(bool, type, suffix, has_single_bit) \
	DEFINE_BIT_FUNCTION(unsigned int, type, suffix, bit_width) \
	DEFINE_BIT_FUNCTION(type, type, suffix, bit_floor) \
	DEFINE_BIT_FUNCTION(type, type, suffix, bit_ceil)

DEFINE_BIT_FUNCTIONS(unsigned char, uc)
DEFINE_BIT_FUNCTIONS(unsigned short, us)
DEFINE_BIT_FUNCTIONS(unsigned int, ui)
DEFINE_BIT_FUNCTIONS(unsigned long, ul)
DEFINE_BIT_FUNCTIONS(unsigned long long, ull)
