#include <stdlib.h>

static int count;

static void first(void)
{
    _Exit(count == 1 ? 0 : 1);
}
static void second(void)
{
    ++count;
}
int main(void)
{
    if (at_quick_exit(first) || at_quick_exit(second))
        return 2;
    quick_exit(3);
}
