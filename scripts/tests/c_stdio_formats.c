#include <stdarg.h>
#include <stdio.h>
#include <string.h>

static int format_output(char* buffer, const char* format, ...)
{
	va_list args;
	int written;
	va_start(args, format);
	written = vsprintf(buffer, format, args);
	va_end(args);
	return written;
}

int main(void)
{
	char buffer[48];
	const char expected[] = "+0003:abc:1.25:127";
	short decimal = 0;
	unsigned long hexadecimal = 0;
	double real = 0;
	int consumed = -1;
	int (*read_values)(const char*, const char*, ...) = sscanf;

	if (format_output(buffer, "%+05d:%.3s:%.2f:%ld", 3, "abcd", 1.25, 127L) != sizeof(expected) - 1 ||
		strcmp(buffer, expected))
		return 1;
	if (read_values("-12:7f:2.50!", "%hd:%lx:%lf%n", &decimal, &hexadecimal, &real, &consumed) != 3)
		return 2;
	return decimal != -12 || hexadecimal != 127 || real != 2.5 || consumed != 11;
}
