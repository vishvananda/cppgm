// The SDK assertion header must run again after changes to NDEBUG.
#include_next <assert.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_ASSERT_H__ 202311L
#undef static_assert
#undef assert
#ifdef NDEBUG
#define assert(...) ((void)0)
#else
#define assert(...) ((void)((__VA_ARGS__) || (__assert_fail(#__VA_ARGS__, __FILE__, __LINE__, __func__), 0)))
#endif
#endif
