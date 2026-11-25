#ifndef CPPGM_WASI_MATH_SDK_POWER_H
#define CPPGM_WASI_MATH_SDK_POWER_H
#include "math_error.h"
#include "math_float_round.h"
#define predict_false(condition) __builtin_expect((condition) != 0, 0)
static inline uint64_t asuint64(double value)
{
	return (union binary64){ .value = value }.bits;
}
static inline double asdouble(uint64_t bits)
{
	return (union binary64){ .bits = bits }.value;
}
union binary32
{
	float value;
	uint32_t bits;
};
static inline uint32_t asuint(float value)
{
	return (union binary32){ .value = value }.bits;
}
static inline float asfloat(uint32_t bits)
{
	return (union binary32){ .bits = bits }.value;
}
#define SDK_ERROR __attribute__((visibility("hidden")))
SDK_ERROR double __math_invalid(double);
SDK_ERROR double __math_divzero(uint32_t);
SDK_ERROR double __math_oflow(uint32_t);
SDK_ERROR double __math_uflow(uint32_t);
SDK_ERROR float __math_invalidf(float);
SDK_ERROR float __math_divzerof(uint32_t);
SDK_ERROR float __math_oflowf(uint32_t);
SDK_ERROR float __math_uflowf(uint32_t);
#endif
