#include <stdatomic.h>
void(atomic_thread_fence)(memory_order order)
{
	if (order != memory_order_relaxed)
		atomic_thread_fence(order);
}

void(atomic_signal_fence)(memory_order order)
{
	if (order != memory_order_relaxed)
		atomic_signal_fence(order);
}

bool(atomic_flag_test_and_set)(volatile atomic_flag* object)
{
	return atomic_flag_test_and_set(object);
}

bool(atomic_flag_test_and_set_explicit)(volatile atomic_flag* object, memory_order order)
{
	return atomic_flag_test_and_set_explicit(object, order);
}

void(atomic_flag_clear)(volatile atomic_flag* object)
{
	atomic_flag_clear(object);
}

void(atomic_flag_clear_explicit)(volatile atomic_flag* object, memory_order order)
{
	atomic_flag_clear_explicit(object, order);
}
