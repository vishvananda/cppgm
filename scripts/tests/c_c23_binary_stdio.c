#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>

#if __STDC_VERSION__ < 202311L
int main(void)
{
	int value = -1;
	int count = -1;
	if (sscanf("0b11!", "%i%n", &value, &count) != 1 || value != 0 || count != 1)
		return 1;
	value = -1;
	count = -1;
	return swscanf(L"0b11!", L"%i%n", &value, &count) != 1 || value != 0 || count != 1;
}
#else
#ifdef PRIBMAX
#define CHECK_UPPER(suffix, type) \
	if (snprintf(buffer, sizeof(buffer), "%#" PRIB##suffix, (type)5) != 5 || strcmp(buffer, "0B101")) \
		return 1;
#else
#define CHECK_UPPER(suffix, type)
#endif

#define CHECK_MACROS(suffix, type) \
	do \
	{ \
		type value = 0; \
		if (snprintf(buffer, sizeof(buffer), "%#" PRIb##suffix, (type)5) != 5 || strcmp(buffer, "0b101") || \
			sscanf(buffer, "%" SCNb##suffix, &value) != 1 || value != 5) \
			return 1; \
		CHECK_UPPER(suffix, type) \
	} while (0)

static int check_macros(void)
{
	char buffer[16];
	CHECK_MACROS(8, uint8_t);
	CHECK_MACROS(16, uint16_t);
	CHECK_MACROS(32, uint32_t);
	CHECK_MACROS(64, uint64_t);
	CHECK_MACROS(LEAST8, uint_least8_t);
	CHECK_MACROS(LEAST16, uint_least16_t);
	CHECK_MACROS(LEAST32, uint_least32_t);
	CHECK_MACROS(LEAST64, uint_least64_t);
	CHECK_MACROS(FAST8, uint_fast8_t);
	CHECK_MACROS(FAST16, uint_fast16_t);
	CHECK_MACROS(FAST32, uint_fast32_t);
	CHECK_MACROS(FAST64, uint_fast64_t);
	CHECK_MACROS(MAX, uintmax_t);
	CHECK_MACROS(PTR, uintptr_t);
	return 0;
}

static int check_wide(void)
{
	wchar_t buffer[32];
	unsigned binary = 0;
	int consumed = -1;
	int autodetected = 0;
	uint_fast16_t fast = 0;
	int_least8_t count = -1;
	static const wchar_t format[] = L"%#08b %wf16u%w8n";
	if (swprintf(buffer, sizeof(buffer) / sizeof(*buffer), format, 5U, (uint_fast16_t)9, &count) != 10 ||
		wcscmp(buffer, L"0b000101 9") || count != 10)
		return 1;
	if (swscanf(L"0b101 -0B10 0B11!", L"%b %i %wf16b%n", &binary, &autodetected, &fast, &consumed) != 3 ||
		binary != 5 || autodetected != -2 || fast != 3 || consumed != 16)
		return 2;
	return 0;
}

static int check_stream(void)
{
	const char path[] = "c23-binary-stdio.dat";
	FILE* file = fopen(path, "w+");
	unsigned value = 0;
	char tail = 0;
	if (!file)
		return 1;
	int status = fprintf(file, "prefix %#.8b!", 5U) != 18 || fflush(file) || fseek(file, 0L, SEEK_SET) ||
		fscanf(file, "prefix %10b%c", &value, &tail) != 2 || value != 5 || tail != '!';
	return fclose(file) || remove(path) || status;
}

int main(void)
{
	char buffer[24];
	unsigned binary = 0;
	int autodetected = 0, consumed = -1;
	uint_least32_t least = 0;
	uint_fast32_t fast = 0;
	uintmax_t largest = 0;
	int (*scan)(const char*, const char*, ...) = sscanf;
	const char least_binary[] = "%w32b";
	const char fast_binary[] = "%wf32b";

	if (snprintf(buffer, sizeof(buffer), "%#b", 5U) != 5 || strcmp(buffer, "0b101"))
		return 1;
	if (scan("0B1001!", "%b%n", &binary, &consumed) != 1 || binary != 9 || consumed != 6)
		return 2;
	if (sscanf("-0b10!", "%i%n", &autodetected, &consumed) != 1 || autodetected != -2 || consumed != 5)
		return 3;
	if (sscanf("101!", least_binary, &least) != 1 || least != 5 || sscanf("111!", fast_binary, &fast) != 1 || fast != 7)
		return 4;
	if (snprintf(buffer, sizeof(buffer), least_binary, least) != 3 || strcmp(buffer, "101") ||
		snprintf(buffer, sizeof(buffer), fast_binary, fast) != 3 || strcmp(buffer, "111"))
		return 5;
	if (snprintf(buffer, sizeof(buffer), "%" PRIbMAX, (uintmax_t)6) != 3 || strcmp(buffer, "110"))
		return 6;
	if (sscanf(buffer, "%" SCNbMAX, &largest) != 1 || largest != 6)
		return 7;
	if (snprintf(buffer, sizeof(buffer), "[%#.0b][%#-8b]", 0U, 3U) != 12 || strcmp(buffer, "[][0b11    ]"))
		return 8;
	if (sscanf("11 0b10!", "%*b %4b%n", &binary, &consumed) != 1 || binary != 2 || consumed != 7)
		return 9;
	if (check_wide())
		return 10;
	if (check_stream())
		return 11;
	return check_macros() ? 12 : 0;
}
#endif
