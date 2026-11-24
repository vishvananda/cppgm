#include <stdint.h>

#include "math_error.h"

// WASI SDK 34 calls these helpers on the exceptional paths of its libm.
#define SDK_MATH __attribute__((visibility("hidden")))

#define DEFINE_INVALID(type, suffix) \
	SDK_MATH type __math_invalid##suffix(type value) \
	{ \
		return isnan(value) ? value + value : (type)math_domain_error(); \
	}

DEFINE_INVALID(double, )
DEFINE_INVALID(float, f)
DEFINE_INVALID(long double, l)

#define DEFINE_RANGE(type, suffix) \
	SDK_MATH type __math_oflow##suffix(uint32_t sign) \
	{ \
		const type infinity = math_range_error(); \
		return sign ? -infinity : infinity; \
	} \
	SDK_MATH type __math_divzero##suffix(uint32_t sign) \
	{ \
		return __math_oflow##suffix(sign); \
	}

DEFINE_RANGE(double, )
DEFINE_RANGE(float, f)
