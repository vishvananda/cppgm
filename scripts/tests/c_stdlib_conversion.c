#include <errno.h>
#include <limits.h>
#include <stdlib.h>

int main(void)
{
	char* end;
	const char digits[] = "  -0x1a!";
	const char bad[] = "!";
	const char overflow[] = "999999999999999999999999999999999999999999999999";
	unsigned long (*read_unsigned)(const char*, char**, int) = strtoul;
	div_t parts;

	if (strtol(digits, &end, 0) != -26 || *end != '!')
		return 1;
	if (read_unsigned("175p", &end, 8) != 125 || *end != 'p')
		return 2;
	if (strtol(bad, &end, 10) != 0 || end != bad)
		return 3;
	errno = 0;
	if (strtol(overflow, &end, 10) != LONG_MAX || errno != ERANGE || *end)
		return 4;
	parts = div(17, 4);
	return parts.quot != 4 || parts.rem != 1;
}
