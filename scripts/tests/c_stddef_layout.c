#include <stddef.h>

#if defined(__STDC_VERSION_STDDEF_H__) && __STDC_VERSION_STDDEF_H__ >= 202311L
static_assert(_Generic(nullptr, nullptr_t: 1, default: 0));
#ifndef unreachable
#error C23 stddef.h must define unreachable
#endif
#endif

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
