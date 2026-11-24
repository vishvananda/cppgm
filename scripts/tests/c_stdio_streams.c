#include <stdio.h>
#include <string.h>

int main(void)
{
	const char path[] = "c-library-stream.dat";
	const unsigned char expected[] = { 0, 'A', 255 };
	unsigned char buffer[sizeof(expected)];
	fpos_t position;
	FILE* file = fopen(path, "w+b");

	if (!file)
		return 1;
	if (fwrite(expected, sizeof(expected[0]), sizeof(expected), file) != sizeof(expected) || (putc)('X', file) != 'X' ||
		fflush(file))
		return 2;
	if (fseek(file, 0L, SEEK_SET) || fgetpos(file, &position))
		return 3;
	if (fread(buffer, sizeof(buffer[0]), sizeof(buffer), file) != sizeof(buffer) ||
		memcmp(buffer, expected, sizeof(buffer)))
		return 4;
	if (getc(file) != 'X' || ungetc('Y', file) != 'Y' || (getc)(file) != 'Y')
		return 5;
	if (fgetc(file) != EOF || !feof(file) || ferror(file))
		return 6;
	clearerr(file);
	if (feof(file) || fsetpos(file, &position) || fgetc(file) != 0)
		return 7;
	return fclose(file) || remove(path);
}
