#include <time.h>

int main(void)
{
	struct timespec a, b;
	int (*resolution)(struct timespec*, int) = timespec_getres;
	if (timespec_getres(nullptr, TIME_UTC) != TIME_UTC)
		return 1;
	if (timespec_getres(&a, TIME_UTC) != TIME_UTC || resolution(&b, TIME_UTC) != TIME_UTC)
		return 2;
	return a.tv_sec < 0 || a.tv_nsec < 0 || a.tv_nsec >= 1000000000L || a.tv_sec != b.tv_sec || a.tv_nsec != b.tv_nsec;
}
