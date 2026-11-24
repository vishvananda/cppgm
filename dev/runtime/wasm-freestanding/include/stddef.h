// Forward each inclusion so the resource header can process partial requests.
#include_next <stddef.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L && !defined(__STDC_VERSION_STDDEF_H__)
#define __STDC_VERSION_STDDEF_H__ 202311L
#endif
