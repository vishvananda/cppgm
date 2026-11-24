#include <assert.h>

static int check_enabled(void)
{
	int evaluated = 0;
	assert(++evaluated);
	return evaluated == 1;
}

#define NDEBUG
#include <assert.h>

static int check_disabled(void)
{
	int evaluated = 0;
	assert(++evaluated);
	return evaluated == 0;
}

#undef NDEBUG
#include <assert.h>

int main(void)
{
	int evaluated = 0;
	assert(++evaluated);
	return !check_enabled() || !check_disabled() || evaluated != 1;
}
