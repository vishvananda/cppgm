#include <wchar.h>

#define MATCHES(expression, type) _Generic((expression), type: 1, default: 0)

int main(void)
{
	wchar_t writable[] = L"atlas";
	const wchar_t readonly[] = L"atlas";
	wchar_t* copies[] = { writable, writable, writable };
	wchar_t** next = copies;
	wchar_t character = L't';
	size_t length = 5;

	static_assert(MATCHES(wcschr(writable, L't'), wchar_t*));
	static_assert(MATCHES(wcschr(readonly, L't'), const wchar_t*));
	static_assert(MATCHES(wcspbrk(writable, L"s"), wchar_t*));
	static_assert(MATCHES(wcspbrk(readonly, L"s"), const wchar_t*));
	static_assert(MATCHES(wcsrchr(writable, L'a'), wchar_t*));
	static_assert(MATCHES(wcsrchr(readonly, L'a'), const wchar_t*));
	static_assert(MATCHES(wmemchr(writable, L't', 5), wchar_t*));
	static_assert(MATCHES(wmemchr(readonly, L't', 5), const wchar_t*));
	static_assert(MATCHES(wcsstr(writable, L"la"), wchar_t*));
	static_assert(MATCHES(wcsstr(readonly, L"la"), const wchar_t*));
	static_assert(MATCHES((wcschr)(readonly, L't'), wchar_t*));

	if (wmemchr(*next++, character++, length--) != writable + 1 || next != copies + 1 || character != L'u' ||
		length != 4)
		return 1;
	const wchar_t* accept[] = { L"s", L"la" };
	const wchar_t** search = accept;
	if (wcspbrk(*next++, *search++) != writable + 4 || wcsstr(*next++, *search++) != writable + 2 ||
		next != copies + 3 || search != accept + 2)
		return 2;
	wchar_t* (*find_character)(const wchar_t*, wchar_t) = wcschr;
	return find_character(readonly, L'l') != readonly + 2 || wcschr(readonly, L'\0') != readonly + 5 ||
		wcsrchr(readonly, L'a') != readonly + 3 || wcsstr(readonly, L"") != readonly ||
		wcsstr(readonly, L"lasz") != nullptr || wmemchr(readonly, L's', 4) != nullptr;
}
