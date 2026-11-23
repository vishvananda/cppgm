#include <limits.h>
#include <uchar.h>

int main(void)
{
	char16_t ch16 = 0;
	char32_t ch32 = 0;
	mbstate_t in16 = { 0 }, in32 = { 0 };
	mbstate_t out16 = { 0 }, out32 = { 0 };
	char buffer[MB_LEN_MAX];

	if (mbrtoc16(&ch16, "A", 1, &in16) != 1 || ch16 != u'A')
		return 1;
	if (mbrtoc32(&ch32, "Z", 1, &in32) != 1 || ch32 != U'Z')
		return 2;
	if (c16rtomb(buffer, ch16, &out16) != 1 || buffer[0] != 'A')
		return 3;
	if (c32rtomb(buffer, ch32, &out32) != 1 || buffer[0] != 'Z')
		return 4;
	if (mbrtoc16(&ch16, "", 1, &in16) != 0 || ch16 != 0 || mbrtoc32(&ch32, "", 1, &in32) != 0 || ch32 != 0)
		return 5;
	return 0;
}
