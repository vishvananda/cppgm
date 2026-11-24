#include <stdint.h>
#include <stdlib.h>

size_t memalignment(const void* pointer)
{
	uintptr_t address = (uintptr_t)pointer;
	return address & -address;
}
