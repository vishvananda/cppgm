#include <stddef.h>

struct record
{
	char flag;
	long value;
};

int main(void)
{
	struct record item;
	unsigned char* start = (unsigned char*)&item;
	unsigned char* member = (unsigned char*)&item.value;
	const size_t offset = offsetof(struct record, value);
	const ptrdiff_t distance = (start + offset) - start;
	void* nothing = NULL;
	return nothing != (void*)0 || offsetof(struct record, flag) != 0 || offset < sizeof(item.flag) ||
		member != start + distance || offset + sizeof(item.value) > sizeof(item);
}
