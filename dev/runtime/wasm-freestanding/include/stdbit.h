#ifndef __CPPGM_STDBIT_H
#define __CPPGM_STDBIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define __STDC_VERSION_STDBIT_H__ 202311L
#define __STDC_ENDIAN_LITTLE__ __ORDER_LITTLE_ENDIAN__
#define __STDC_ENDIAN_BIG__ __ORDER_BIG_ENDIAN__
#define __STDC_ENDIAN_NATIVE__ __BYTE_ORDER__

#ifdef __cplusplus
extern "C" {
#elif defined(__has_c_attribute)
#if __has_c_attribute(unsequenced)
#define __CPPGM_UNSEQUENCED [[unsequenced]]
#endif
#endif

#ifndef __CPPGM_UNSEQUENCED
#define __CPPGM_UNSEQUENCED
#endif

#define __CPPGM_DECLARE_STDBIT(type, suffix) \
	unsigned int stdc_leading_zeros_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_leading_ones_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_trailing_zeros_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_trailing_ones_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_first_leading_zero_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_first_leading_one_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_first_trailing_zero_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_first_trailing_one_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_count_zeros_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_count_ones_##suffix(type) __CPPGM_UNSEQUENCED; \
	bool stdc_has_single_bit_##suffix(type) __CPPGM_UNSEQUENCED; \
	unsigned int stdc_bit_width_##suffix(type) __CPPGM_UNSEQUENCED; \
	type stdc_bit_floor_##suffix(type) __CPPGM_UNSEQUENCED; \
	type stdc_bit_ceil_##suffix(type) __CPPGM_UNSEQUENCED;

__CPPGM_DECLARE_STDBIT(unsigned char, uc)
__CPPGM_DECLARE_STDBIT(unsigned short, us)
__CPPGM_DECLARE_STDBIT(unsigned int, ui)
__CPPGM_DECLARE_STDBIT(unsigned long, ul)
__CPPGM_DECLARE_STDBIT(unsigned long long, ull)

#undef __CPPGM_DECLARE_STDBIT
#undef __CPPGM_UNSEQUENCED

#ifdef __cplusplus
}
#endif

#define stdc_leading_zeros(value) __builtin_stdc_leading_zeros(value)
#define stdc_leading_ones(value) __builtin_stdc_leading_ones(value)
#define stdc_trailing_zeros(value) __builtin_stdc_trailing_zeros(value)
#define stdc_trailing_ones(value) __builtin_stdc_trailing_ones(value)
#define stdc_first_leading_zero(value) __builtin_stdc_first_leading_zero(value)
#define stdc_first_leading_one(value) __builtin_stdc_first_leading_one(value)
#define stdc_first_trailing_zero(value) __builtin_stdc_first_trailing_zero(value)
#define stdc_first_trailing_one(value) __builtin_stdc_first_trailing_one(value)
#define stdc_count_zeros(value) __builtin_stdc_count_zeros(value)
#define stdc_count_ones(value) __builtin_stdc_count_ones(value)
#define stdc_has_single_bit(value) __builtin_stdc_has_single_bit(value)
#define stdc_bit_width(value) __builtin_stdc_bit_width(value)
#define stdc_bit_floor(value) __builtin_stdc_bit_floor(value)
#define stdc_bit_ceil(value) __builtin_stdc_bit_ceil(value)

#endif
