#include <stdio.h>
#include <string.h>

#if TMP_MAX < 25
#error TMP_MAX must support at least 25 distinct strings
#endif

static int check_streams(void)
{
	FILE* (*volatile make_stream)(void) = tmpfile;
	FILE* first = make_stream();
	FILE* second = make_stream();
	int passed = first && second;
	if (passed)
	{
		passed = fputc(0x80, first) == 0x80 && fputc(0x40, second) == 0x40 && fseek(first, 0, SEEK_SET) == 0 &&
			fseek(second, 0, SEEK_SET) == 0 && fgetc(first) == 0x80 && fgetc(second) == 0x40;
	}
	if (first && fclose(first) != 0)
		passed = 0;
	if (second && fclose(second) != 0)
		passed = 0;
	return passed;
}

static int check_names(void)
{
	char* (*volatile make_name)(char*) = tmpnam;
	char names[25][L_tmpnam];
	FILE* named;
	char* internal_name;
	int different, closed;
	unsigned i, j;
	for (i = 0; i < sizeof(names) / sizeof(names[0]); ++i)
	{
		if (make_name(names[i]) != names[i] || !names[i][0])
			return 0;
		for (j = 0; j < i; ++j)
			if (strcmp(names[j], names[i]) == 0)
				return 0;
	}
	named = fopen(names[0], "wb");
	if (!named)
		return 0;
	internal_name = make_name(NULL);
	different = internal_name && strcmp(internal_name, names[0]) != 0;
	closed = fclose(named) == 0;
	return remove(names[0]) == 0 && different && closed;
}

int main(int argc, char** argv)
{
	(void)argv;
	if (argc > 1)
	{
		char name[L_tmpnam];
		FILE* file = tmpfile();
		if (file)
		{
			fclose(file);
			return 3;
		}
		return tmpnam(name) != NULL;
	}
	if (!check_streams())
		return 1;
	if (!check_names())
		return 2;
	return 0;
}
