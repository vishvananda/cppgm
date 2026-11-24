#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdlib.h>
#include <wchar.h>

#if __STDC_VERSION__ >= 202311L
static int check_prefixes(void)
{
	const char input[] = "0b101!";
	char* end;
	long (*convert)(const char*, char**, int) = strtol;
	const wchar_t wide_input[] = L"0b101!";
	wchar_t* wide_end;
	long (*wide_convert)(const wchar_t*, wchar_t**, int) = wcstol;
	if (strtol(input, &end, 0) != 5 || *end != '!')
		return 1;
	if (convert("-0B101!", &end, 2) != -5 || *end != '!')
		return 2;
	if (strtoul("0B11!", &end, 0) != 3 || *end != '!')
		return 3;
	if (strtoll("-0b1100!", &end, 0) != -12 || *end != '!')
		return 4;
	if (strtoull("0B111!", &end, 2) != 7 || *end != '!')
		return 5;
	if (strtoimax("-0b11!", &end, 0) != -3 || *end != '!')
		return 6;
	if (strtoumax("0B100!", &end, 2) != 4 || *end != '!')
		return 7;
	if (wcstol(wide_input, &wide_end, 0) != 5 || *wide_end != L'!')
		return 8;
	if (wide_convert(L"\t-0B101!", &wide_end, 2) != -5 || *wide_end != L'!')
		return 9;
	if (wcstoul(L"0B11!", &wide_end, 0) != 3 || *wide_end != L'!')
		return 10;
	if (wcstoll(L"-0b1100!", &wide_end, 0) != -12 || *wide_end != L'!')
		return 11;
	if (wcstoull(L"0B111!", &wide_end, 2) != 7 || *wide_end != L'!')
		return 12;
	if (wcstoimax(L"-0b11!", &wide_end, 0) != -3 || *wide_end != L'!')
		return 13;
	return wcstoumax(L"0B100!", &wide_end, 2) != 4 || *wide_end != L'!';
}

static int check_other_forms(void)
{
	const char incomplete[] = "-0b2";
	const wchar_t wide_incomplete[] = L"-0B";
	char* end;
	wchar_t* wide_end;
	if (strtol(incomplete, &end, 2) != 0 || end != incomplete + 2)
		return 1;
	if (wcstol(wide_incomplete, &wide_end, 0) != 0 || wide_end != wide_incomplete + 2)
		return 2;
	if (strtol("0b11!", &end, 16) != 0xb11 || *end != '!')
		return 3;
	if (wcstol(L"0B11!", &wide_end, 16) != 0xb11 || *wide_end != L'!')
		return 4;
	if (strtol("0b1'01", &end, 0) != 1 || *end != '\'')
		return 5;
	if (wcstol(L"0b1'01", &wide_end, 2) != 1 || *wide_end != L'\'')
		return 6;
	return strtol(" \t+0b001!", nullptr, 0) != 1 || wcstol(L" \t+0b001!", nullptr, 2) != 1;
}

// A leading sign lets each test use the same subject for both signs.
static void binary_subject(char* narrow, wchar_t* wide, unsigned width, int rest)
{
	narrow[0] = wide[0] = '-';
	narrow[1] = wide[1] = '0';
	narrow[2] = wide[2] = 'b';
	narrow[3] = wide[3] = '1';
	for (unsigned index = 1; index < width; ++index)
		narrow[3 + index] = wide[3 + index] = rest;
	narrow[3 + width] = wide[3 + width] = '!';
	narrow[4 + width] = wide[4 + width] = 0;
}

#define CHECK_RANGE(convert, input, end, expected, error) \
	do \
	{ \
		errno = 0; \
		if ((convert)((input), &(end), 0) != (expected) || *(end) != '!' || errno != (error)) \
			return 1; \
	} while (0)

static int check_boundaries(void)
{
	char narrow[UINTMAX_WIDTH + 6];
	wchar_t wide[UINTMAX_WIDTH + 6];
	char* end;
	wchar_t* wide_end;
	binary_subject(narrow, wide, LONG_WIDTH - 1, '1');
	CHECK_RANGE(strtol, narrow + 1, end, LONG_MAX, 0);
	CHECK_RANGE(wcstol, wide + 1, wide_end, LONG_MAX, 0);
	binary_subject(narrow, wide, LONG_WIDTH, '0');
	CHECK_RANGE(strtol, narrow, end, LONG_MIN, 0);
	CHECK_RANGE(wcstol, wide, wide_end, LONG_MIN, 0);
	CHECK_RANGE(strtol, narrow + 1, end, LONG_MAX, ERANGE);
	CHECK_RANGE(wcstol, wide + 1, wide_end, LONG_MAX, ERANGE);
	binary_subject(narrow, wide, LLONG_WIDTH + 1, '1');
	CHECK_RANGE(strtoll, narrow, end, LLONG_MIN, ERANGE);
	CHECK_RANGE(wcstoll, wide, wide_end, LLONG_MIN, ERANGE);
	CHECK_RANGE(strtoull, narrow, end, ULLONG_MAX, ERANGE);
	CHECK_RANGE(wcstoull, wide, wide_end, ULLONG_MAX, ERANGE);
	binary_subject(narrow, wide, ULONG_WIDTH, '1');
	CHECK_RANGE(strtoul, narrow, end, 1UL, 0);
	CHECK_RANGE(wcstoul, wide, wide_end, 1UL, 0);
	binary_subject(narrow, wide, UINTMAX_WIDTH, '1');
	CHECK_RANGE(strtoumax, narrow, end, UINTMAX_C(1), 0);
	CHECK_RANGE(wcstoumax, wide, wide_end, UINTMAX_C(1), 0);
	CHECK_RANGE(strtoumax, narrow + 1, end, UINTMAX_MAX, 0);
	CHECK_RANGE(wcstoumax, wide + 1, wide_end, UINTMAX_MAX, 0);
	binary_subject(narrow, wide, UINTMAX_WIDTH + 1, '1');
	CHECK_RANGE(strtoimax, narrow + 1, end, INTMAX_MAX, ERANGE);
	CHECK_RANGE(wcstoimax, wide + 1, wide_end, INTMAX_MAX, ERANGE);
	return 0;
}

int main(void)
{
	return check_prefixes() ? 1 : check_other_forms() ? 2 : check_boundaries() ? 3 : 0;
}
#else
int main(void)
{
	const char input[] = "0b101!";
	const wchar_t wide_input[] = L"0b101!";
	char* end;
	wchar_t* wide_end;
	long (*convert)(const char*, char**, int) = strtol;
	long (*wide_convert)(const wchar_t*, wchar_t**, int) = wcstol;
	if (strtol(input, &end, 0) != 0 || end != input + 1)
		return 1;
	if (convert(input, &end, 2) != 0 || end != input + 1)
		return 2;
	if (wcstol(wide_input, &wide_end, 0) != 0 || wide_end != wide_input + 1)
		return 3;
	return wide_convert(wide_input, &wide_end, 2) != 0 || wide_end != wide_input + 1;
}
#endif
