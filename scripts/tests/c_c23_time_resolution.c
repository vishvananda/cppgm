#include <time.h>

int main(void)
{
	struct timespec a, b;
	int (*resolution)(struct timespec*, int) = timespec_getres;
	if (timespec_getres(nullptr, TIME_UTC) != TIME_UTC)
		return 1;
	if (timespec_getres(&a, TIME_UTC) != TIME_UTC || resolution(&b, TIME_UTC) != TIME_UTC)
		return 2;
	if (a.tv_sec < 0 || a.tv_nsec < 0 || a.tv_nsec >= 1000000000L || a.tv_sec != b.tv_sec || a.tv_nsec != b.tv_nsec)
		return 3;
	if (resolution(&b, 0) || a.tv_sec != b.tv_sec || a.tv_nsec != b.tv_nsec)
		return 4;
	time_t instant = 86415;
	struct tm utc, local;
	return gmtime_r(&instant, &utc) != &utc || localtime_r(&instant, &local) != &local || timegm(&utc) != instant;
}
