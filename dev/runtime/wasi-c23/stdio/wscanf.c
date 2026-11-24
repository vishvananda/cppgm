#include <stdio.h>
#include <wchar.h>
#include "variadic.h"

VARIADIC(wscanf, (const wchar_t* restrict format, ...), vfwscanf(stdin, format, arguments))

int vwscanf(const wchar_t* restrict format, va_list arguments)
{
	return vfwscanf(stdin, format, arguments);
}
