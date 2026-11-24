#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer[24];
	unsigned binary = 0;
	int autodetected = 0, consumed = -1;
	uint_least32_t least = 0;
	uint_fast32_t fast = 0;
	uintmax_t largest = 0;
	int (*scan)(const char*, const char*, ...) = sscanf;
	const char least_binary[] = "%w32b";
	const char fast_binary[] = "%wf32b";

	if (snprintf(buffer, sizeof(buffer), "%#b", 5U) != 5 || strcmp(buffer, "0b101"))
		return 1;
	if (scan("0B1001!", "%b%n", &binary, &consumed) != 1 || binary != 9 || consumed != 6)
		return 2;
	if (sscanf("-0b10!", "%i%n", &autodetected, &consumed) != 1 || autodetected != -2 || consumed != 5)
		return 3;
	if (sscanf("101!", least_binary, &least) != 1 || least != 5 || sscanf("111!", fast_binary, &fast) != 1 || fast != 7)
		return 4;
	if (snprintf(buffer, sizeof(buffer), least_binary, least) != 3 || strcmp(buffer, "101") ||
		snprintf(buffer, sizeof(buffer), fast_binary, fast) != 3 || strcmp(buffer, "111"))
		return 5;
	if (snprintf(buffer, sizeof(buffer), "%" PRIbMAX, (uintmax_t)6) != 3 || strcmp(buffer, "110"))
		return 6;
	return sscanf(buffer, "%" SCNbMAX, &largest) != 1 || largest != 6;
}
