#include <stdio.h>
#include <wchar.h>
#include "variadic.h"

VARIADIC(wprintf, (const wchar_t* restrict format, ...), vfwprintf(stdout, format, arguments))

int vwprintf(const wchar_t* restrict format, va_list arguments)
{
	return vfwprintf(stdout, format, arguments);
}
