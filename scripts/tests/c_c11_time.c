#include <time.h>

int main(void)
{
	struct timespec time;
	if (timespec_get(&time, TIME_UTC) != TIME_UTC)
		return 1;
	return time.tv_nsec < 0 || time.tv_nsec >= 1000000000L;
}
