#include <stdlib.h>

int main(void)
{
	alignas(32) char storage[32] = { 0 };
	size_t (*alignment_of_address)(const void*) = memalignment;
	const size_t boundary = alignment_of_address(storage);
	if (boundary < 32 || (boundary & (boundary - 1)) != 0)
		return 1;
	return memalignment(storage + 1) != 1 || memalignment(nullptr) != 0;
}
