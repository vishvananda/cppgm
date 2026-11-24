#include <inttypes.h>
#include <stdlib.h>

int main(void)
{
	const char input[] = "0b101!";
	char* end;
	long (*convert)(const char*, char**, int) = strtol;
#if __STDC_VERSION__ >= 202311L
	if (strtol(input, &end, 0) != 5 || *end != '!')
		return 1;
	if (convert("-0B101!", &end, 2) != -5 || *end != '!')
		return 2;
	if (strtoul("0B11!", &end, 0) != 3 || *end != '!')
		return 3;
	if (strtoll("-0b1100!", &end, 0) != -12 || *end != '!')
		return 4;
	if (strtoull("0B111!", &end, 2) != 7 || *end != '!')
		return 5;
	if (strtoimax("-0b11!", &end, 0) != -3 || *end != '!')
		return 6;
	return strtoumax("0B100!", &end, 2) != 4 || *end != '!';
#else
	if (strtol(input, &end, 0) != 0 || end != input + 1)
		return 1;
	return convert(input, &end, 2) != 0 || end != input + 1;
#endif
}
