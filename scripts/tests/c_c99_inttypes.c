#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer[32];
	char* end;
	intmax_t number = 0;
	int_least16_t narrow = 0;
	uint_fast8_t fast = 0;
	uintptr_t pointer_width = 0;
	const imaxdiv_t divided = imaxdiv((intmax_t)-17, (intmax_t)4);
	uintmax_t (*convert)(const char*, char**, int) = strtoumax;

	if (strtoimax("-100!", &end, 0) != -100 || *end != '!')
		return 1;
	if (convert("0xffff!", &end, 0) != 65535 || *end != '!')
		return 2;
	if (divided.quot != -4 || divided.rem != -1 || imaxabs(divided.quot) != 4)
		return 3;
	if (snprintf(buffer, sizeof(buffer), "%" PRIdMAX, (intmax_t)-2048) != 5 || strcmp(buffer, "-2048"))
		return 4;
	if (sscanf(buffer, "%" SCNdMAX, &number) != 1 || number != -2048)
		return 5;
	if (snprintf(buffer, sizeof(buffer), "%" PRIdLEAST16 ":%" PRIXFAST8 ":%" PRIuPTR, (int_least16_t)-12,
			(uint_fast8_t)171, (uintptr_t)40124) != 12 ||
		strcmp(buffer, "-12:AB:40124"))
		return 6;
	return sscanf(buffer, "%" SCNdLEAST16 ":%" SCNxFAST8 ":%" SCNuPTR, &narrow, &fast, &pointer_width) != 3 ||
		narrow != -12 || fast != 171 || pointer_width != 40124;
}
