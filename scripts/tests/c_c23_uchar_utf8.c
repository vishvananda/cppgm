#include <limits.h>
#include <uchar.h>

int main(void)
{
	mbstate_t input = { 0 }, output = { 0 };
	char8_t unit = 0;
	char bytes[MB_LEN_MAX];
	if (mbrtoc8(&unit, "A", 1, &input) != 1 || unit != 0x41)
		return 1;
	if (c8rtomb(bytes, unit, &output) != 1 || bytes[0] != 'A')
		return 2;
	if (mbrtoc8(&unit, "", 1, &input) != 0 || unit != 0)
		return 3;
	return c8rtomb(bytes, unit, &output) != 1 || bytes[0] != '\0';
}
