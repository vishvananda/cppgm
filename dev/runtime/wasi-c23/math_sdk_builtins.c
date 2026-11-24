// WASI SDK 34 groups these entry points in math-builtins.c.obj. Supply all
// of them together so the square-root definitions replace that member.
#include <stdint.h>
#include <string.h>

#include "math_error.h"

#define DEFINE_UNARY(type, name, suffix) \
	type name##suffix(type x) \
	{ \
		return __builtin_##name##suffix(x); \
	}

#define DEFINE_BUILTINS(type, suffix, bits, sign) \
	DEFINE_UNARY(type, fabs, suffix) \
	DEFINE_UNARY(type, ceil, suffix) \
	DEFINE_UNARY(type, floor, suffix) \
	DEFINE_UNARY(type, trunc, suffix) \
	DEFINE_UNARY(type, nearbyint, suffix) \
	DEFINE_UNARY(type, rint, suffix) \
	type copysign##suffix(type x, type y) \
	{ \
		bits magnitude, source; \
		memcpy(&magnitude, &x, sizeof magnitude); \
		memcpy(&source, &y, sizeof source); \
		magnitude = (magnitude & ~(sign)) | (source & (sign)); \
		memcpy(&x, &magnitude, sizeof x); \
		return x; \
	} \
	type sqrt##suffix(type x) \
	{ \
		if (x < 0) \
			return math_domain_error(); \
		return __builtin_sqrt##suffix(x); \
	}

DEFINE_BUILTINS(float, f, uint32_t, UINT32_C(0x80000000))
DEFINE_BUILTINS(double, , uint64_t, UINT64_C(0x8000000000000000))
