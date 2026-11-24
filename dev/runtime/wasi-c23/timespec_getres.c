#define _POSIX_C_SOURCE 200809L
#include <time.h>

int timespec_getres(struct timespec* resolution, int base)
{
	if (base != TIME_UTC)
		return 0;
	struct timespec ignored;
	return clock_getres(CLOCK_REALTIME, resolution ? resolution : &ignored) == 0 ? base : 0;
}
