// Forward each inclusion so the resource header can process partial requests.
#include_next <stdarg.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__STDC_VERSION_STDARG_H__)
#define __STDC_VERSION_STDARG_H__ 202311L
#endif
