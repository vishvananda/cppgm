#include <stdarg.h>
#include <stdio.h>
#include <string.h>

static int check_copy(const char* pattern, ...)
{
	char first[5], second[12];
	va_list original, copy;
	int a, b;
	va_start(original, pattern);
	if (va_arg(original, int) != 17)
	{
		va_end(original);
		return 1;
	}
	va_copy(copy, original);
	a = vsnprintf(first, sizeof(first), pattern, original);
	b = vsnprintf(second, sizeof(second), pattern, copy);
	va_end(copy);
	va_end(original);
	return a != 8 || b != 8 || strcmp(first, "name") || strcmp(second, "name:3.5");
}

int main(void)
{
	return check_copy("%s:%.1f", 17, "name", 3.5);
}
