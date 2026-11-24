// clang-format Language: Cpp
#ifndef CPPGM_WASI_PRINTF_ARGUMENTS_H
#define CPPGM_WASI_PRINTF_ARGUMENTS_H

#include "integer_width.h"

/* Convenient bit representation for modifier flags, which all fall
 * within 31 codepoints of the space character. */

#define ALT_FORM (1U << '#' - ' ')
#define ZERO_PAD (1U << '0' - ' ')
#define LEFT_ADJ (1U << '-' - ' ')
#define PAD_POS (1U << ' ' - ' ')
#define MARK_POS (1U << '+' - ' ')
#define GROUPED (1U << '\'' - ' ')

#define FLAGMASK (ALT_FORM | ZERO_PAD | LEFT_ADJ | PAD_POS | MARK_POS | GROUPED)

/* State machine to accept length modifiers + conversion specifiers.
 * Result is 0 on failure, or an argument type to pop on success. */

enum
{
	BARE,
	LPRE,
	LLPRE,
	HPRE,
	HHPRE,
	BIGLPRE,
	ZTPRE,
	JPRE,
	STOP,
	PTR,
	INT,
	UINT,
	ULLONG,
	LONG,
	ULONG,
	SHORT,
	USHORT,
	CHAR,
	UCHAR,
	LLONG,
	SIZET,
	IMAX,
	UMAX,
	PDIFF,
	UIPTR,
	DBL,
	LDBL,
	NOARG,
	MAXSTATE
};

#define S(x) [(x) - 'A']

static const unsigned char states[]['z' - 'A' + 1] = { {
														   /* 0: bare types */
														   S('d') = INT,
														   S('i') = INT,
														   S('b') = UINT,
														   S('B') = UINT,
														   S('o') = UINT,
														   S('u') = UINT,
														   S('x') = UINT,
														   S('X') = UINT,
														   S('e') = DBL,
														   S('f') = DBL,
														   S('g') = DBL,
														   S('a') = DBL,
														   S('E') = DBL,
														   S('F') = DBL,
														   S('G') = DBL,
														   S('A') = DBL,
														   S('c') = INT,
														   S('C') = UINT,
														   S('s') = PTR,
														   S('S') = PTR,
														   S('p') = UIPTR,
														   S('n') = PTR,
														   S('m') = NOARG,
														   S('l') = LPRE,
														   S('h') = HPRE,
														   S('L') = BIGLPRE,
														   S('z') = ZTPRE,
														   S('j') = JPRE,
														   S('t') = ZTPRE,
													   },
	{
		/* 1: l-prefixed */
		S('d') = LONG,
		S('i') = LONG,
		S('b') = ULONG,
		S('B') = ULONG,
		S('o') = ULONG,
		S('u') = ULONG,
		S('x') = ULONG,
		S('X') = ULONG,
		S('e') = DBL,
		S('f') = DBL,
		S('g') = DBL,
		S('a') = DBL,
		S('E') = DBL,
		S('F') = DBL,
		S('G') = DBL,
		S('A') = DBL,
		S('c') = UINT,
		S('s') = PTR,
		S('n') = PTR,
		S('l') = LLPRE,
	},
	{
		/* 2: ll-prefixed */
		S('d') = LLONG,
		S('i') = LLONG,
		S('b') = ULLONG,
		S('B') = ULLONG,
		S('o') = ULLONG,
		S('u') = ULLONG,
		S('x') = ULLONG,
		S('X') = ULLONG,
		S('n') = PTR,
	},
	{
		/* 3: h-prefixed */
		S('d') = SHORT,
		S('i') = SHORT,
		S('b') = USHORT,
		S('B') = USHORT,
		S('o') = USHORT,
		S('u') = USHORT,
		S('x') = USHORT,
		S('X') = USHORT,
		S('n') = PTR,
		S('h') = HHPRE,
	},
	{
		/* 4: hh-prefixed */
		S('d') = CHAR,
		S('i') = CHAR,
		S('b') = UCHAR,
		S('B') = UCHAR,
		S('o') = UCHAR,
		S('u') = UCHAR,
		S('x') = UCHAR,
		S('X') = UCHAR,
		S('n') = PTR,
	},
	{
		/* 5: L-prefixed */
		S('e') = LDBL,
		S('f') = LDBL,
		S('g') = LDBL,
		S('a') = LDBL,
		S('E') = LDBL,
		S('F') = LDBL,
		S('G') = LDBL,
		S('A') = LDBL,
		S('n') = PTR,
	},
	{
		/* 6: z- or t-prefixed (assumed to be same size) */
		S('d') = PDIFF,
		S('i') = PDIFF,
		S('b') = SIZET,
		S('B') = SIZET,
		S('o') = SIZET,
		S('u') = SIZET,
		S('x') = SIZET,
		S('X') = SIZET,
		S('n') = PTR,
	},
	{
		/* 7: j-prefixed */
		S('d') = IMAX,
		S('i') = IMAX,
		S('b') = UMAX,
		S('B') = UMAX,
		S('o') = UMAX,
		S('u') = UMAX,
		S('x') = UMAX,
		S('X') = UMAX,
		S('n') = PTR,
	} };

#define OOB(x) ((unsigned)(x) - 'A' > 'z' - 'A')

union arg
{
	uintmax_t i;
	long double f;
	void* p;
};

static void pop_arg(union arg* arg, int type, va_list* ap)
{
	switch (type)
	{
	case PTR:
		arg->p = va_arg(*ap, void*);
		break;
	case INT:
		arg->i = va_arg(*ap, int);
		break;
	case UINT:
		arg->i = va_arg(*ap, unsigned int);
		break;
	case LONG:
		arg->i = va_arg(*ap, long);
		break;
	case ULONG:
		arg->i = va_arg(*ap, unsigned long);
		break;
	case ULLONG:
		arg->i = va_arg(*ap, unsigned long long);
		break;
	case SHORT:
		arg->i = (short)va_arg(*ap, int);
		break;
	case USHORT:
		arg->i = (unsigned short)va_arg(*ap, int);
		break;
	case CHAR:
		arg->i = (signed char)va_arg(*ap, int);
		break;
	case UCHAR:
		arg->i = (unsigned char)va_arg(*ap, int);
		break;
	case LLONG:
		arg->i = va_arg(*ap, long long);
		break;
	case SIZET:
		arg->i = va_arg(*ap, size_t);
		break;
	case IMAX:
		arg->i = va_arg(*ap, intmax_t);
		break;
	case UMAX:
		arg->i = va_arg(*ap, uintmax_t);
		break;
	case PDIFF:
		arg->i = va_arg(*ap, ptrdiff_t);
		break;
	case UIPTR:
		arg->i = (uintptr_t)va_arg(*ap, void*);
		break;
	case DBL:
		arg->f = va_arg(*ap, double);
		break;
	case LDBL:
		arg->f = va_arg(*ap, long double);
	}
}

static unsigned width_prefix(int fast, int width)
{
	switch (width_kind(fast, width))
	{
	case WIDTH_CHAR:
		return HHPRE;
	case WIDTH_SHORT:
		return HPRE;
	case WIDTH_INT:
		return BARE;
	case WIDTH_LLONG:
		return LLPRE;
	default:
		return STOP;
	}
}

static void store_count(void* dest, unsigned prefix, int count)
{
	switch (prefix)
	{
	case BARE:
		*(int*)dest = count;
		break;
	case LPRE:
		*(long*)dest = count;
		break;
	case LLPRE:
		*(long long*)dest = count;
		break;
	case HPRE:
		*(short*)dest = count;
		break;
	case HHPRE:
		*(signed char*)dest = count;
		break;
	case ZTPRE:
		*(ptrdiff_t*)dest = count;
		break;
	case JPRE:
		*(intmax_t*)dest = count;
		break;
	}
}

#endif
