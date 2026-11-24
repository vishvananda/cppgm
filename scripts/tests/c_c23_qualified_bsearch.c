#include <stdlib.h>

static int compare(const void* lhs, const void* rhs)
{
	int a = *(const int*)lhs;
	int b = *(const int*)rhs;
	return (a > b) - (a < b);
}

int main(void)
{
	int key = 4;
	int mutable_values[] = { 2, 4, 6 };
	const int const_values[] = { 2, 4, 6 };
	static_assert(_Generic(bsearch(&key, mutable_values, 3, sizeof(int), compare), void*: 1, default: 0));
	static_assert(_Generic(bsearch(&key, const_values, 3, sizeof(int), compare), const void*: 1, default: 0));
	static_assert(_Generic((bsearch)(&key, const_values, 3, sizeof(int), compare), void*: 1, default: 0));
	static_assert(_Generic(bsearch(&key, &const_values, 3, sizeof(int), compare), const void*: 1, default: 0));

	const int* base = const_values;
	size_t count = 3;
	const int* found = bsearch(&key, (base++, const_values), count--, sizeof(int), compare);
	if (found != const_values + 1 || base != const_values + 1 || count != 2)
		return 1;
	int* mutable_found = bsearch(&key, mutable_values, 3, sizeof(int), compare);
	if (mutable_found != mutable_values + 1)
		return 2;
	*mutable_found = 5;
	void* (*search)(const void*, const void*, size_t, size_t, int (*)(const void*, const void*)) = bsearch;
	return search(&key, mutable_values, 3, sizeof(int), compare) != nullptr ||
		search(&key, const_values, 3, sizeof(int), compare) != const_values + 1;
}
