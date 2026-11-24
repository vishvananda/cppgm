#include <string.h>

void* memset_explicit(void* destination, int value, size_t count)
{
	__builtin_memset(destination, value, count);
	__asm__ __volatile__("" : : "r"(destination) : "memory");
	return destination;
}
