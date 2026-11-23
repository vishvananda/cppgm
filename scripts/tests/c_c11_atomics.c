#include <stdatomic.h>

#if defined(__STDC_NO_ATOMICS__)
#error the default hosted target must advertise atomic types
#endif

static atomic_int value = ATOMIC_VAR_INIT(9);
static atomic_flag flag = ATOMIC_FLAG_INIT;

int main(void)
{
	if (atomic_fetch_add_explicit(&value, 2, memory_order_relaxed) != 9)
		return 1;
	int expected = 10;
	if (atomic_compare_exchange_strong(&value, &expected, 15) || expected != 11)
		return 2;
	if (!atomic_compare_exchange_strong(&value, &expected, 15) || atomic_load(&value) != 15)
		return 3;
	if (atomic_flag_test_and_set_explicit(&flag, memory_order_acquire))
		return 4;
	if (!atomic_flag_test_and_set_explicit(&flag, memory_order_acquire))
		return 5;
	atomic_flag_clear_explicit(&flag, memory_order_release);
	if (atomic_flag_test_and_set_explicit(&flag, memory_order_relaxed))
		return 6;
	int lock_free = atomic_is_lock_free(&value);
	if ((ATOMIC_INT_LOCK_FREE == 2 && !lock_free) || (ATOMIC_INT_LOCK_FREE == 0 && lock_free))
		return 7;
	return 0;
}
