#include_next <float.h>

#if defined(__wasm32__) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
// The Wasm scalar formats are binary32, binary64, and binary128.
#ifndef FLT_IS_IEC_60559
#define FLT_IS_IEC_60559 1
#endif
#ifndef DBL_IS_IEC_60559
#define DBL_IS_IEC_60559 1
#endif
#ifndef LDBL_IS_IEC_60559
#define LDBL_IS_IEC_60559 1
#endif
#ifndef __STDC_VERSION_FLOAT_H__
#define __STDC_VERSION_FLOAT_H__ 202311L
#endif
#endif
