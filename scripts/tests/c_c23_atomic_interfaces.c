#include <stdatomic.h>
#include <uchar.h>

#ifdef ATOMIC_VAR_INIT
#error C23 removed ATOMIC_VAR_INIT
#endif

static atomic_char8_t value = 'A';
static volatile atomic_flag flag = ATOMIC_FLAG_INIT;
static void (*volatile thread_fence)(memory_order) = atomic_thread_fence;
static void (*volatile signal_fence)(memory_order) = atomic_signal_fence;
static bool (*volatile test_and_set)(volatile atomic_flag*) = atomic_flag_test_and_set;
static bool (*volatile test_and_set_explicit)(volatile atomic_flag*, memory_order) = atomic_flag_test_and_set_explicit;
static void (*volatile clear)(volatile atomic_flag*) = atomic_flag_clear;
static void (*volatile clear_explicit)(volatile atomic_flag*, memory_order) = atomic_flag_clear_explicit;

static_assert(ATOMIC_CHAR8_T_LOCK_FREE >= 0 && ATOMIC_CHAR8_T_LOCK_FREE <= 2);

int main(void)
{
	static_assert(_Generic(atomic_load(&value), char8_t: 1, default: 0));
	char8_t expected = 'A';
	if (!atomic_compare_exchange_strong(&value, &expected, 'B'))
		return 1;
	if (atomic_compare_exchange_strong(&value, &expected, 'C') || expected != 'B')
		return 2;
	if (atomic_fetch_add_explicit(&value, 1, memory_order_relaxed) != 'B' ||
		atomic_exchange_explicit(&value, 'D', memory_order_acq_rel) != 'C')
		return 3;
	const bool lock_free = atomic_is_lock_free(&value);
	if ((ATOMIC_CHAR8_T_LOCK_FREE == 0 && lock_free) || (ATOMIC_CHAR8_T_LOCK_FREE == 2 && !lock_free))
		return 4;
	thread_fence(memory_order_relaxed);
	thread_fence(memory_order_acq_rel);
	signal_fence(memory_order_seq_cst);
	if (test_and_set(&flag) || !test_and_set_explicit(&flag, memory_order_acquire))
		return 5;
	clear_explicit(&flag, memory_order_release);
	if (test_and_set_explicit(&flag, memory_order_acquire))
		return 6;
	clear(&flag);
	return test_and_set(&flag) || atomic_load(&value) != 'D';
}
