#ifndef CPPGM_WASI_SCANF_ARGUMENTS_H
#define CPPGM_WASI_SCANF_ARGUMENTS_H

#include "integer_width.h"

#define SIZE_hh -2
#define SIZE_h -1
#define SIZE_def 0
#define SIZE_l 1
#define SIZE_L 2
#define SIZE_ll 3
#define SIZE_invalid 4

static void store_int(void* dest, int size, unsigned long long i)
{
	if (!dest)
		return;
	switch (size)
	{
	case SIZE_hh:
		*(signed char*)dest = i;
		break;
	case SIZE_h:
		*(short*)dest = i;
		break;
	case SIZE_def:
		*(int*)dest = i;
		break;
	case SIZE_l:
		*(long*)dest = i;
		break;
	case SIZE_ll:
		*(long long*)dest = i;
		break;
	}
}

static void* arg_n(va_list ap, unsigned int n)
{
	void* p;
	unsigned int i;
	va_list ap2;
	va_copy(ap2, ap);
	for (i = n; i > 1; i--)
		va_arg(ap2, void*);
	p = va_arg(ap2, void*);
	va_end(ap2);
	return p;
}

static int width_size(int fast, int width)
{
	switch (width_kind(fast, width))
	{
	case WIDTH_CHAR:
		return SIZE_hh;
	case WIDTH_SHORT:
		return SIZE_h;
	case WIDTH_INT:
		return SIZE_def;
	case WIDTH_LLONG:
		return SIZE_ll;
	default:
		return SIZE_invalid;
	}
}

unsigned long long __cppgm_c23_scan_integer(FILE*, unsigned);

#endif
