#include <signal.h>

static volatile sig_atomic_t received;
static void handle(int signal_number)
{
	received = signal_number;
}

int main(void)
{
	if (signal(SIGTERM, handle) == SIG_ERR || raise(SIGTERM) != 0 || received != SIGTERM)
		return 1;
	if (signal(SIGTERM, SIG_IGN) == SIG_ERR)
		return 2;
	received = 0;
	return raise(SIGTERM) != 0 || received != 0;
}
