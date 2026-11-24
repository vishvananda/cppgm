CPP_GM_SDK_HEADERS
#if __has_include(<stdarg.h>)
#include <stdarg.h>
CPP_GM_STDARG
#ifdef __STDC_VERSION_STDARG_H__
CPP_GM_STDARG_VERSION
#endif
#endif
#if __has_include(<stdckdint.h>)
CPP_GM_STDCKDINT
#endif
#if __has_include(<stdbit.h>)
CPP_GM_STDBIT
#endif

#if __has_include(<limits.h>)
#include <limits.h>
#if defined(BOOL_WIDTH) || defined(__STDC_VERSION_LIMITS_H__)
CPP_GM_LIMITS_WIDTHS
#endif
#endif
#if __has_include(<stdint.h>)
#include <stdint.h>
#if defined(INT_LEAST8_WIDTH) || defined(__STDC_VERSION_STDINT_H__)
CPP_GM_STDINT_WIDTHS
#endif
#endif

#if __has_include(<float.h>)
#include <float.h>
#if defined(FLT_NORM_MAX) || defined(__STDC_VERSION_FLOAT_H__)
CPP_GM_FLOAT_CONSTANTS
#endif
#if defined(FLT_IS_IEC_60559) || defined(__STDC_VERSION_FLOAT_H__)
CPP_GM_FLOAT_FORMATS
#endif
#endif
