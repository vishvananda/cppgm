#include <threads.h>

#if defined(__STDC_NO_THREADS__)
#error the selected Linux runtime must expose the C11 threads API
#endif

struct handoff
{
	mtx_t mutex;
	cnd_t changed;
	tss_t key;
	int ready;
	int result;
	int destructed;
};

static _Thread_local int local_value = 2;
static once_flag once = ONCE_FLAG_INIT;
static int calls;

static void initialize(void)
{
	++calls;
}

static void destroy_thread_value(void* value)
{
	struct handoff* state = value;
	++state->destructed;
}

static int worker(void* argument)
{
	struct handoff* state = argument;
	call_once(&once, initialize);
	call_once(&once, initialize);
	int valid = local_value == 2 && tss_get(state->key) == 0 && tss_set(state->key, state) == thrd_success &&
		tss_get(state->key) == state;
	local_value = 13;
	if (mtx_lock(&state->mutex) != thrd_success)
		return 1;
	state->result = valid ? local_value : 0;
	state->ready = 1;
	cnd_signal(&state->changed);
	mtx_unlock(&state->mutex);
	return 9;
}

int main(void)
{
	struct handoff state;
	state.ready = 0;
	state.destructed = 0;
	if (mtx_init(&state.mutex, mtx_plain) != thrd_success || cnd_init(&state.changed) != thrd_success ||
		tss_create(&state.key, destroy_thread_value) != thrd_success)
		return 1;
	local_value = 7;
	thrd_t thread;
	if (mtx_lock(&state.mutex) != thrd_success || thrd_create(&thread, worker, &state) != thrd_success)
		return 2;
	while (!state.ready)
		if (cnd_wait(&state.changed, &state.mutex) != thrd_success)
			return 3;
	int received = state.result;
	if (mtx_unlock(&state.mutex) != thrd_success)
		return 4;
	int result;
	if (thrd_join(thread, &result) != thrd_success)
		return 5;
	call_once(&once, initialize);
	int valid = received == 13 && result == 9 && calls == 1 && state.destructed == 1 && local_value == 7 &&
		tss_get(state.key) == 0;
	tss_delete(state.key);
	cnd_destroy(&state.changed);
	mtx_destroy(&state.mutex);
	return valid ? 0 : 6;
}
