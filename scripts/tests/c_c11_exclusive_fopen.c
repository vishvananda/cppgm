#include <stdio.h>

int main(void)
{
	static const char path[] = "exclusive-file";
	FILE* stream = fopen(path, "wx");
	if (!stream)
		return 1;
	if (fputc('X', stream) != 'X' || fclose(stream) != 0)
		return 2;
	stream = fopen(path, "wx");
	if (stream)
	{
		fclose(stream);
		return 3;
	}
	stream = fopen(path, "r");
	if (!stream)
		return 4;
	int character = fgetc(stream);
	return fclose(stream) != 0 || character != 'X' || remove(path) != 0;
}
