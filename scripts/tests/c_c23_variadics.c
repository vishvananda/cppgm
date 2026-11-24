#include <stdarg.h>

static int total(...)
{
	va_list args, copy;
	va_start(args);
	va_copy(copy, args);
	int count = va_arg(args, int);
	int sum = 0;
	(void)va_arg(copy, int);
	for (int i = 0; i < count; ++i)
		sum += va_arg(args, int);
	int first = va_arg(copy, int);
	va_end(copy);
	va_end(args);
	return sum + first;
}

int main(void)
{
	return total(3, 10, 20, 30) != 70;
}
