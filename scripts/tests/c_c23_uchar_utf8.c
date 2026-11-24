#include <errno.h>
#include <limits.h>
#include <locale.h>
#include <string.h>
#include <uchar.h>
#include <wchar.h>

static int check_ascii(void)
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

static int check_character(const char* source, size_t length, size_t split)
{
	mbstate_t input = { 0 }, output = { 0 };
	char8_t unit = 0x19;
	char bytes[MB_LEN_MAX + 1];
	memset(bytes, 0x19, sizeof bytes);
	if (split && (mbrtoc8(&unit, source, split, &input) != (size_t)-2 || unit != 0x19 || mbsinit(&input)))
		return 1;
	if (mbrtoc8(&unit, source + split, length - split, &input) != length - split)
		return 2;
	for (size_t index = 0; index < length; ++index)
	{
		if (index && mbrtoc8(&unit, "", 0, &input) != (size_t)-3)
			return 3;
		int finished = index + 1 == length;
		if (unit != (unsigned char)source[index] || !!mbsinit(&input) != finished)
			return 4;
		if (c8rtomb(bytes, unit, &output) != (finished ? length : 0) || !!mbsinit(&output) != finished)
			return 5;
		if (!finished && bytes[0] != 0x19)
			return 6;
	}
	return memcmp(source, bytes, length) != 0 || bytes[length] != 0x19;
}

static int check_errors(void)
{
	const char invalid[][5] = { "\x80", "\xc0\x80", "\xe0\x80\x80", "\xed\xa0\x80", "\xf4\x90\x80\x80" };
	const size_t cases = sizeof invalid / sizeof invalid[0];
	size_t decode_cases = cases;
#if !defined(__wasi__)
	// The WASI locale decoder rejects values above the Unicode scalar range.
	// Some native locale decoders accept this final sequence as an extension.
	--decode_cases;
#endif
	for (size_t index = 0; index < cases; ++index)
	{
		mbstate_t input = { 0 }, output = { 0 };
		char8_t unit = 0x19;
		char bytes[MB_LEN_MAX];
		size_t length = strlen(invalid[index]);
		errno = 0;
		if (index < decode_cases &&
			(mbrtoc8(&unit, invalid[index], length, &input) != (size_t)-1 || errno != EILSEQ || unit != 0x19))
			return 1;
		errno = 0;
		size_t stored = 0;
		for (size_t byte = 0; byte < length && stored == 0; ++byte)
			stored = c8rtomb(bytes, (unsigned char)invalid[index][byte], &output);
		if (stored != (size_t)-1 || errno != EILSEQ)
			return 2;
	}
	return 0;
}

static int check_null(void)
{
	mbstate_t input = { 0 }, output = { 0 };
	const char source[] = "\xc2\x80";
	char bytes[MB_LEN_MAX];
	if (mbrtoc8(nullptr, source, 2, &input) != 2 || mbsinit(&input) ||
		mbrtoc8(nullptr, nullptr, 0, &input) != (size_t)-3 || !mbsinit(&input))
		return 1;
	if (c8rtomb(nullptr, 0xff, &output) != 1 || c8rtomb(bytes, 0xc2, &output) != 0)
		return 2;
	errno = 0;
	if (c8rtomb(nullptr, 0x80, &output) != (size_t)-1 || errno != EILSEQ)
		return 3;
	if (mbrtoc8(nullptr, source, 2, nullptr) != 2 || c8rtomb(bytes, 0xc2, nullptr) != 0 ||
		mbrtoc8(nullptr, "", 0, nullptr) != (size_t)-3 || c8rtomb(bytes, 0x80, nullptr) != 2)
		return 4;
	return memcmp(source, bytes, 2) != 0 || mbrtoc8(nullptr, nullptr, 0, nullptr) != 0 ||
		c8rtomb(nullptr, 0, nullptr) != 1;
}

int main(void)
{
	if (check_ascii())
		return 1;
	if (!setlocale(LC_CTYPE, "C.UTF-8") && !setlocale(LC_CTYPE, "en_US.UTF-8"))
		return 2;
	const char examples[][5] = { "A", "\xc2\x80", "\xdf\xbf", "\xe0\xa0\x80", "\xed\x9f\xbf", "\xee\x80\x80",
		"\xef\xbf\xbf", "\xf0\x90\x80\x80", "\xf4\x8f\xbf\xbf" };
	for (size_t index = 0; index < sizeof examples / sizeof examples[0]; ++index)
	{
		size_t length = strlen(examples[index]);
		for (size_t split = 0; split < length; ++split)
			if (check_character(examples[index], length, split))
				return 3;
	}
	if (check_errors())
		return 4;
	return check_null() ? 5 : 0;
}
