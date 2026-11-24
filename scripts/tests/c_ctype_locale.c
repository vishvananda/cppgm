#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int input = 'A';
	int (*classify)(int) = isalpha;
	struct lconv* settings;

	if (!isalpha(input++) || input != 'A' + 1 || !classify('a') || classify('2') || classify(EOF))
		return 1;
	if (!isxdigit('F') || isxdigit('G') || !isspace('\t') || tolower('A') != 'a' || toupper('z') != 'Z')
		return 2;
	if (!setlocale(LC_ALL, "C"))
		return 3;
	settings = localeconv();
	if (strcmp(settings->decimal_point, ".") || *settings->thousands_sep || *settings->grouping)
		return 4;
	if (*settings->currency_symbol || *settings->mon_decimal_point || *settings->negative_sign)
		return 5;
	return 0;
}
