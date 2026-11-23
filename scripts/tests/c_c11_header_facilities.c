#include <assert.h>
#include <stdalign.h>
#include <stdint.h>
#include <stdnoreturn.h>
#include <stdlib.h>

struct storage {
    alignas(32) char bytes[32];
};
static_assert(alignof(struct storage) >= 32, "member raises struct alignment");
static_assert(__alignas_is_defined == 1, "alignas macro announcement");
static_assert(__alignof_is_defined == 1, "alignof macro announcement");

static struct storage item;
static noreturn void fail(void)
{
    _Exit(1);
}
int main(void)
{
    if ((uintptr_t)&item % alignof(struct storage) != 0)
        fail();
    return 0;
}
