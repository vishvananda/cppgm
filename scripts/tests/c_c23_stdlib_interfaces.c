#include <float.h>
#include <stdlib.h>
#include <string.h>

static int first_calls;
static int second_calls;

static void first(void)
{
	++first_calls;
}

static void second(void)
{
	++second_calls;
}

int main(void)
{
	once_flag first_flag = ONCE_FLAG_INIT;
	once_flag second_flag = ONCE_FLAG_INIT;
	call_once(&first_flag, first);
	call_once(&first_flag, first);
	call_once(&second_flag, second);
	call_once(&second_flag, second);
	if (first_calls != 1 || second_calls != 1)
		return 1;

	char buffer[48];
	if (strfromd(buffer, sizeof(buffer), "%.2f", -6.25) != 5 || strcmp(buffer, "-6.25"))
		return 2;
	if (strfromf(buffer, sizeof(buffer), "%.3e", 1.25f) != 9 || strcmp(buffer, "1.250e+00"))
		return 3;
	if (strfroml(nullptr, 0, "%.4f", 1.25L) != 6 || strfroml(buffer, 4, "%.4f", 1.25L) != 6 || strcmp(buffer, "1.2"))
		return 4;
	if (strfroml(buffer, sizeof(buffer), "%.000000000000000004f", 1.25L) != 6 || strcmp(buffer, "1.2500"))
		return 5;
#if LDBL_MANT_DIG > 60
	const long double beyond_double = 0x1.000000000000001p0L;
	int (*from_long_double)(char*, size_t, const char*, long double) = strfroml;
	if (from_long_double(buffer, sizeof(buffer), "%.20f", beyond_double) != 22 ||
		strcmp(buffer, "1.00000000000000000087"))
		return 6;
#endif
	char* end = nullptr;
	return strfroml(buffer, sizeof(buffer), "%a", 6.125L) <= 0 || strtold(buffer, &end) != 6.125L || *end;
}
