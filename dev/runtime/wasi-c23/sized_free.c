#include <stdlib.h>

void free_sized(void* allocation, size_t size)
{
	(void)size;
	free(allocation);
}

void free_aligned_sized(void* allocation, size_t alignment, size_t size)
{
	(void)alignment;
	(void)size;
	free(allocation);
}
