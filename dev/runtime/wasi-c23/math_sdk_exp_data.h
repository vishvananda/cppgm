#ifndef CPPGM_WASI_MATH_SDK_EXP_DATA_H
#define CPPGM_WASI_MATH_SDK_EXP_DATA_H

#include <stdint.h>

#define EXP_TABLE_BITS 7
#define EXP_POLY_ORDER 5

// Keep the type compatible with the declaration in the SDK's exp_data.h.
extern __attribute__((visibility("hidden"))) const struct exp_data
{
	double invln2N;
	double shift;
	double negln2hiN;
	double negln2loN;
	double poly[4];
	double exp2_shift;
	double exp2_poly[5];
	uint64_t tab[2 * (1 << EXP_TABLE_BITS)];
} __exp_data;

#endif
