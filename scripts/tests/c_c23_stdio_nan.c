#include <math.h>
#include <stdio.h>

#if _PRINTF_NAN_LEN_MAX < 0 || _PRINTF_NAN_LEN_MAX >= 64
#error invalid maximum NaN output length
#endif

int main(void)
{
#ifdef NAN
	char buffer[64];
	int lower = snprintf(buffer, sizeof(buffer), "%+g", (double)NAN);
	int upper = snprintf(buffer, sizeof(buffer), "%G", -(double)NAN);
	return lower < 3 || upper < 3 || lower > _PRINTF_NAN_LEN_MAX || upper > _PRINTF_NAN_LEN_MAX;
#else
	return _PRINTF_NAN_LEN_MAX != 0;
#endif
}
