#include <setjmp.h>

static jmp_buf target;

static void jump(void)
{
	longjmp(target, 42);
}

int main(void)
{
	switch (setjmp(target))
	{
	case 0:
		jump();
		return 1;
	case 42:
		return 0;
	default:
		return 2;
	}
}
