#include <stdlib.h>

int main(void)
{
	void (*release)(void*, size_t) = free_sized;
	void (*release_aligned)(void*, size_t, size_t) = free_aligned_sized;
	release(nullptr, 0);
	release_aligned(nullptr, 0, 0);
	for (size_t capacity = 16; capacity <= 256; capacity *= 2)
	{
		unsigned char* allocation = malloc(capacity);
		if (!allocation)
			return 1;
		allocation[capacity - 1] = 11;
		unsigned char* resized = realloc(allocation, capacity * 2);
		if (!resized || resized[capacity - 1] != 11)
			return 2;
		release(resized, capacity * 2);
		void* aligned = aligned_alloc(32, capacity * 2);
		if (!aligned || memalignment(aligned) < 32)
			return 3;
		release_aligned(aligned, 32, capacity * 2);
	}
	return 0;
}
