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
	char buffer[20];
	long double value = 0;
	int count = -1;
	if (format_output(buffer, "%.2Lf", 2.5L) != 4 || strcmp(buffer, "2.50"))
		return 1;
	return sscanf(buffer, "%Lf%n", &value, &count) != 1 || value != 2.5L || count != 4;
}
