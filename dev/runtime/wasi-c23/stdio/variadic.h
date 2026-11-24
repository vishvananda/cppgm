#ifndef CPPGM_WASI_STDIO_VARIADIC_H
#define CPPGM_WASI_STDIO_VARIADIC_H

#include <stdarg.h>

#define VARIADIC(name, parameters, call) \
	int name parameters \
	{ \
		va_list arguments; \
		va_start(arguments, format); \
		int result = call; \
		va_end(arguments); \
		return result; \
	}

#endif
