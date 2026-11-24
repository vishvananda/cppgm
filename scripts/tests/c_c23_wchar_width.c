#include <wchar.h>

enum
{
	wchar_width = WCHAR_WIDTH
};

#include <limits.h>

int main(void)
{
	return wchar_width < 8 || wchar_width != sizeof(wchar_t) * CHAR_BIT;
}
