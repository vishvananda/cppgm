#include <stdio.h>
#include "variadic.h"

VARIADIC(scanf, (const char* restrict format, ...), vfscanf(stdin, format, arguments))

int vscanf(const char* restrict format, va_list arguments)
{
	return vfscanf(stdin, format, arguments);
}
