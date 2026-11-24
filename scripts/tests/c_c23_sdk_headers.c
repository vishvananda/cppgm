CPP_GM_SDK_HEADERS
#if __has_include(<stdarg.h>)
#include <stdarg.h>
CPP_GM_STDARG
#ifdef __STDC_VERSION_STDARG_H__
CPP_GM_STDARG_VERSION
#if __STDC_VERSION_STDARG_H__ == 202311L
CPP_GM_STDARG_VERSION_CURRENT
#endif
#endif
#endif
#if __has_include(<stdckdint.h>)
CPP_GM_STDCKDINT
#endif
#if __has_include(<stdbit.h>)
CPP_GM_STDBIT
#endif
