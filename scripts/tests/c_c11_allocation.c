#include <stdint.h>
#include <stdlib.h>

int main(void)
{
	unsigned char* buffer = aligned_alloc(64, 128);
	if (!buffer)
		return 1;
	if ((uintptr_t)buffer % 64)
	{
		free(buffer);
		return 2;
	}
	volatile unsigned char* bytes = buffer;
	bytes[0] = 3;
	bytes[127] = 9;
	int result = bytes[0] != 3 || bytes[127] != 9;
	free(buffer);
	return result;
}
