#include <stdlib.h>

int main(void)
{
	size_t i;
	void* (*resize)(void*, size_t) = realloc;
	unsigned char* buffer = calloc(16, sizeof(*buffer));
	unsigned char* larger;

	if (!buffer)
		return 1;
	for (i = 0; i < 16; ++i)
		if (buffer[i] != 0)
			return 2;
	for (i = 0; i < 16; ++i)
		buffer[i] = (unsigned char)(i + 7);
	larger = resize(buffer, 64);
	if (!larger)
		return 3;
	for (i = 0; i < 16; ++i)
		if (larger[i] != i + 7)
			return 4;
	larger[63] = 20;
	free(larger);
	return 0;
}
