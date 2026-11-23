#include <iso646.h>
#include <limits.h>
#include <wchar.h>
#include <wctype.h>

int main(void)
{
    mbstate_t state = { 0 };
    wchar_t text[3] = { 0, 0, 0 };
    char narrow[MB_LEN_MAX];
    wctype_t alpha = wctype("alpha");
    if (mbrtowc(text, "a", 1, &state) not_eq 1 or not mbsinit(&state))
        return 1;
    text[1] = (wchar_t)btowc('0');
    if (wcscmp(text, L"a0") not_eq 0 or wcslen(text) not_eq 2)
        return 2;
    if (alpha == 0 or not iswctype(text[0], alpha) or not iswdigit(text[1]))
        return 3;
    if (wcrtomb(narrow, text[0], &state) not_eq 1 or narrow[0] not_eq 'a')
        return 4;
    return 0;
}
