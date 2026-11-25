#ifndef CPPGM_ARM_NEON_H
#define CPPGM_ARM_NEON_H

#include <stdint.h>

// Arm C Language Extensions for little-endian AArch64 Advanced SIMD.
typedef int8_t int8x16_t __attribute__((__vector_size__(16)));
typedef uint8_t uint8x16_t __attribute__((__vector_size__(16)));
typedef uint16_t uint16x8_t __attribute__((__vector_size__(16)));
typedef uint64_t uint64x2_t __attribute__((__vector_size__(16)));
typedef uint8_t poly8_t;
typedef uint64_t poly64_t;
typedef unsigned __int128 poly128_t;
typedef poly8_t poly8x16_t __attribute__((__vector_size__(16)));
typedef poly64_t poly64x2_t __attribute__((__vector_size__(16)));

#define __CPPGM_NEON_INLINE static __inline__ __attribute__((__always_inline__))

__CPPGM_NEON_INLINE uint8x16_t vld1q_u8(const uint8_t* address)
{
	uint8x16_t result;
	__builtin_memcpy(&result, address, sizeof(result));
	return result;
}

__CPPGM_NEON_INLINE uint64x2_t vld1q_u64(const uint64_t* address)
{
	uint64x2_t result;
	__builtin_memcpy(&result, address, sizeof(result));
	return result;
}

__CPPGM_NEON_INLINE void vst1q_u8(uint8_t* address, uint8x16_t value)
{
	__builtin_memcpy(address, &value, sizeof(value));
}

__CPPGM_NEON_INLINE void vst1q_u64(uint64_t* address, uint64x2_t value)
{
	__builtin_memcpy(address, &value, sizeof(value));
}

__CPPGM_NEON_INLINE uint8x16_t vdupq_n_u8(uint8_t value)
{
	uint8x16_t result;
	__asm__("dup %0.16b, %w1" : "=w"(result) : "r"(value));
	return result;
}

__CPPGM_NEON_INLINE uint8x16_t veorq_u8(uint8x16_t a, uint8x16_t b)
{
	return a ^ b;
}
__CPPGM_NEON_INLINE uint64x2_t veorq_u64(uint64x2_t a, uint64x2_t b)
{
	return a ^ b;
}
__CPPGM_NEON_INLINE uint8x16_t vandq_u8(uint8x16_t a, uint8x16_t b)
{
	return a & b;
}

#define vshlq_n_u8(value, shift) ((uint8x16_t)(value) << (shift))
#define vshrq_n_s8(value, shift) ((int8x16_t)(value) >> (shift))
#define vshrq_n_u8(value, shift) ((uint8x16_t)(value) >> (shift))
#define vgetq_lane_u64(value, lane) (((uint64x2_t)(value))[(lane)])

#define vextq_u64(a, b, lane) \
	__extension__({ \
		uint64x2_t __result; \
		__asm__("ext %0.16b, %1.16b, %2.16b, %3" : "=w"(__result) : "w"(a), "w"(b), "i"(8 * (lane))); \
		__result; \
	})

__CPPGM_NEON_INLINE uint64x2_t vreinterpretq_u64_u8(uint8x16_t value)
{
	return (uint64x2_t)value;
}
__CPPGM_NEON_INLINE poly64x2_t vreinterpretq_p64_u64(uint64x2_t value)
{
	return (poly64x2_t)value;
}
__CPPGM_NEON_INLINE uint64x2_t vreinterpretq_u64_p128(poly128_t value)
{
	return (uint64x2_t)value;
}

__CPPGM_NEON_INLINE poly8x16_t vmulq_p8(poly8x16_t a, poly8x16_t b)
{
	poly8x16_t result;
	__asm__("pmul %0.16b, %1.16b, %2.16b" : "=w"(result) : "w"(a), "w"(b));
	return result;
}

__CPPGM_NEON_INLINE poly128_t vmull_p64(poly64_t a, poly64_t b)
{
	const poly64x2_t lhs = { a, 0 }, rhs = { b, 0 };
	poly64x2_t result;
	__asm__("pmull %0.1q, %1.1d, %2.1d" : "=w"(result) : "w"(lhs), "w"(rhs));
	return (poly128_t)result;
}

__CPPGM_NEON_INLINE poly128_t vmull_high_p64(poly64x2_t a, poly64x2_t b)
{
	poly64x2_t result;
	__asm__("pmull2 %0.1q, %1.2d, %2.2d" : "=w"(result) : "w"(a), "w"(b));
	return (poly128_t)result;
}

__CPPGM_NEON_INLINE uint8x16_t vqtbl1q_u8(uint8x16_t table, uint8x16_t indices)
{
	uint8x16_t result;
	__asm__("tbl %0.16b, {%1.16b}, %2.16b" : "=w"(result) : "w"(table), "w"(indices));
	return result;
}

__CPPGM_NEON_INLINE uint8x16_t vqtbx1q_u8(uint8x16_t initial, uint8x16_t table, uint8x16_t indices)
{
	__asm__("tbx %0.16b, {%1.16b}, %2.16b" : "+w"(initial) : "w"(table), "w"(indices));
	return initial;
}

__CPPGM_NEON_INLINE uint16x8_t vrev32q_u16(uint16x8_t value)
{
	uint16x8_t result;
	__asm__("rev32 %0.8h, %1.8h" : "=w"(result) : "w"(value));
	return result;
}

__CPPGM_NEON_INLINE uint8x16_t vceqq_u8(uint8x16_t a, uint8x16_t b)
{
	return (uint8x16_t)(a == b);
}

__CPPGM_NEON_INLINE int8_t vminvq_s8(int8x16_t value)
{
	int8_t result;
	__asm__("sminv b31, %1.16b\nsmov %w0, v31.b[0]" : "=r"(result) : "w"(value) : "v31");
	return result;
}

#undef __CPPGM_NEON_INLINE
#endif
