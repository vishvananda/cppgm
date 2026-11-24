#include <stdlib.h>

static int compare(const void* left, const void* right)
{
	const int a = *(const int*)left;
	const int b = *(const int*)right;
	return (a > b) - (a < b);
}

int main(void)
{
	int values[] = { 7, -1, 0, 4, 3 };
	const int key = 3;
	const int absent = 100;
	const size_t count = sizeof(values) / sizeof(values[0]);
	const int* found;
	size_t i;

	qsort(values, count, sizeof(values[0]), compare);
	for (i = 1; i < count; ++i)
		if (values[i - 1] >= values[i])
			return 1;
	found = bsearch(&key, values, count, sizeof(values[0]), compare);
	return found != values + 2 || bsearch(&absent, values, count, sizeof(values[0]), compare) != NULL;
}
