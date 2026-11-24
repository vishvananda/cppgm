#include <assert.h>

int main(void)
{
	int evaluated = 0;
	assert((int[]){ 1, 2 }[1] == 2 && ++evaluated);
	return evaluated != 1;
}
