#include <stdio.h>
#include "variadic.h"

VARIADIC(printf, (const char* restrict format, ...), vfprintf(stdout, format, arguments))

int vprintf(const char* restrict format, va_list arguments)
{
	return vfprintf(stdout, format, arguments);
}
