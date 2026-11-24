#include <string.h>

#define MATCHES(expression, type) _Generic((expression), type: 1, default: 0)

static int check_qualifiers(void)
{
	char writable[] = "atlas";
	const char readonly[] = "atlas";
	const int words[] = { 0, 1 };
	char* elements[] = { writable, writable };
	char** next = elements;

	static_assert(MATCHES(memchr(writable, 't', 5), void*));
	static_assert(MATCHES(memchr(readonly, 't', 5), const void*));
	static_assert(MATCHES(memchr(words, 0, sizeof words), const void*));
	static_assert(MATCHES(memchr(&words, 0, sizeof words), const void*));
	static_assert(MATCHES(memchr(nullptr, 0, 0), void*));
	static_assert(MATCHES(strchr(readonly, 't'), const char*));
	static_assert(MATCHES(strchr(writable, 't'), char*));
	static_assert(MATCHES(strrchr(readonly, 'a'), const char*));
	static_assert(MATCHES(strrchr(writable, 'a'), char*));
	static_assert(MATCHES(strpbrk(readonly, "s"), const char*));
	static_assert(MATCHES(strpbrk(writable, "s"), char*));
	static_assert(MATCHES(strstr(readonly, "la"), const char*));
	static_assert(MATCHES(strstr(writable, "la"), char*));
	static_assert(MATCHES((strchr)(readonly, 't'), char*));

	int character = 't';
	size_t length = 5;
	if (memchr(*next++, character++, length--) != writable + 1 || next != elements + 1 || character != 'u' ||
		length != 4)
		return 1;
	if (strchr(*next++, --character) != writable + 1 || next != elements + 2 || character != 't')
		return 2;
	char* (*search)(const char*, int) = strchr;
	return search(readonly, 'l') != readonly + 2 || strchr(readonly, '\0') != readonly + 5 ||
		strrchr(readonly, 'a') != readonly + 3 || strpbrk(readonly, "s") != readonly + 4 ||
		strstr(readonly, "la") != readonly + 2 || strstr(readonly, "") != readonly ||
		strstr(readonly, "lasz") != nullptr || memchr(words, 0, sizeof words) != words;
}

static int check_functions(void)
{
	char left[32] = { 0 };
	char right[32] = { 0 };
	if ((strcpy)(left, "astral") != left || (strcat)(left, "_spark") != left || (strlen)(left) != 12 ||
		(strcmp)(left, "astral_spark") != 0)
		return 1;
	if ((strncpy)(right, left, 6) != right || (strncat)(right, "way", 2) != right ||
		(strncmp)(right, "astralwa", 8) != 0 || (strstr)(right, "alwa") != right + 4)
		return 2;
	if ((strpbrk)(left, "q_p") != left + 6 || (strchr)(left, 's') != left + 1 || (strrchr)(left, 's') != left + 7 ||
		(strspn)(left, "ats") != 3 || (strcspn)(left, "p") != 8)
		return 3;
	if ((memset)(right, 'z', sizeof right) != right || (memccpy)(right, left, '_', 12) != right + 7 ||
		(memcmp)(left, right, 7) || (memchr)(right, 'z', 16) != right + 7 ||
		(memcpy)(right + 7, "123", 4) != right + 7 || (memmove)(right + 8, right + 7, 4) != right + 8 ||
		(strcmp)(right + 8, "123") != 0)
		return 4;
	if (memccpy(right, "XYZ", 'x', 3) != nullptr || memcmp(right, "XYZ", 3) != 0)
		return 5;
	if (strncpy(right, "xy", 5) != right || right[2] || right[3] || right[4])
		return 6;
	const char high[] = "\xff";
	const char low[] = "\x7f";
	return strcmp(high, low) <= 0 || strncmp(high, low, 1) <= 0 || memcmp(high, low, 1) <= 0;
}

int main(void)
{
	return check_qualifiers() || check_functions();
}
