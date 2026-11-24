#include <stdlib.h>
#include <string.h>

int main(void)
{
	const char input[] = "abcdef";
	char* full = strdup(input);
	char* prefix = strndup(input, 3);
	char* fewer = strndup(input, 10);
	if (!full || !prefix || !fewer)
		return 1;
	if (strcmp(full, input) || strcmp(prefix, "abc") || strcmp(fewer, input))
		return 2;
	full[0] = 'x';
	if (strcmp(full, "xbcdef") || strcmp(prefix, "abc"))
		return 3;
	free(fewer);
	free(prefix);
	free(full);
	return 0;
}
