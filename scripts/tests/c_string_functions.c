#include <string.h>

int main(void)
{
	char buffer[] = "abcdefgh";
	char copy[sizeof(buffer)];
	int (*compare)(const void*, const void*, size_t) = memcmp;
	char* match;
	memmove(buffer + 2, buffer, 6);
	if (strcmp(buffer, "ababcdef"))
		return 1;
	(memmove)(buffer, buffer + 2, 6);
	if (strcmp(buffer, "abcdefef") || strspn(buffer, "abcdef") != 8)
		return 2;
	if (memcpy(copy, buffer, sizeof(buffer)) != copy || compare(copy, buffer, sizeof(buffer)))
		return 3;
	match = strstr(copy, "def");
	return match != copy + 3 || (strchr)(copy, 'e') != copy + 4;
}
