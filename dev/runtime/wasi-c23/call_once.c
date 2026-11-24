#include <pthread.h>
#include <stdlib.h>

static_assert(_Generic((once_flag*)nullptr, pthread_once_t*: 1, default: 0));
static_assert(ONCE_FLAG_INIT == PTHREAD_ONCE_INIT);

void call_once(once_flag* flag, void (*function)(void))
{
	pthread_once(flag, function);
}
