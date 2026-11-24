#include <limits.h>
#include <string.h>

int main(void)
{
	unsigned char bytes[] = { 0, 1, 2, 3, 4, 5 };
	void* (*fill)(void*, int, size_t) = memset_explicit;
	if (fill(bytes + 1, -1, 3) != bytes + 1)
		return 1;
	if (bytes[0] || bytes[4] != 4 || bytes[5] != 5)
		return 2;
	return bytes[1] != UCHAR_MAX || bytes[2] != UCHAR_MAX || bytes[3] != UCHAR_MAX;
}
