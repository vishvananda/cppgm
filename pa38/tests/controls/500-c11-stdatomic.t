// expect exit 0
#include <stdatomic.h>

static atomic_int value;
static int visits;
static atomic_int *address(void) { ++visits; return &value; }

struct Pair { unsigned x, y; };
static _Atomic(struct Pair) pair;

int main(void)
{
    atomic_init(&value, 3);
    atomic_store_explicit(address(), 7, memory_order_release);
    if (atomic_load_explicit(address(), memory_order_acquire) != 7 || visits != 2)
        return 1;
    if (atomic_exchange(address(), 13) != 7 || visits != 3)
        return 2;
    int expected = 7;
    if (atomic_compare_exchange_strong(address(), &expected, 21) || expected != 13 || visits != 4)
        return 3;
    if (!atomic_compare_exchange_strong_explicit(address(), &expected, 21, memory_order_acq_rel,
            memory_order_acquire) || expected != 13 || visits != 5)
        return 4;
    if (atomic_fetch_add_explicit(&value, 3, memory_order_relaxed) != 21 || atomic_load(&value) != 24)
        return 5;
    atomic_flag flag = ATOMIC_FLAG_INIT;
    if (atomic_flag_test_and_set(&flag) || !atomic_flag_test_and_set_explicit(&flag, memory_order_acquire))
        return 6;
    atomic_flag_clear_explicit(&flag, memory_order_release);
    if (atomic_flag_test_and_set(&flag))
        return 7;
    atomic_signal_fence(memory_order_acq_rel);
    atomic_thread_fence(memory_order_seq_cst);
    if (kill_dependency(expected) != 13)
        return 8;

    struct Pair first = {1, 2};
    struct Pair next = {3, 4};
    atomic_init(&pair, first);
    struct Pair previous = atomic_exchange(&pair, next);
    if (previous.x != 1 || previous.y != 2)
        return 9;
    if (atomic_compare_exchange_strong(&pair, &first, next) || first.x != 3 || first.y != 4)
        return 10;
    if (!atomic_compare_exchange_strong(&pair, &first, previous))
        return 11;
    atomic_store(&pair, next);
    struct Pair current = atomic_load(&pair);
    return current.x != 3 || current.y != 4;
}
