#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int strfromd(char* restrict output, size_t size, const char* restrict format, double value)
{
	return snprintf(output, size, format, value);
}

int strfromf(char* restrict output, size_t size, const char* restrict format, float value)
{
	return snprintf(output, size, format, (double)value);
}

int strfroml(char* restrict output, size_t size, const char* restrict format, long double value)
{
	if (*format++ != '%')
	{
		errno = EINVAL;
		return -1;
	}
	int precision = -1;
	if (*format == '.')
	{
		precision = 0;
		for (++format; (unsigned)(*format - '0') < 10; ++format)
		{
			int digit = *format - '0';
			if (precision > (INT_MAX - digit) / 10)
			{
				errno = EOVERFLOW;
				return -1;
			}
			precision = 10 * precision + digit;
		}
	}
	char conversion = *format;
	switch (conversion | 32)
	{
	case 'a':
	case 'e':
	case 'f':
	case 'g':
		if (format[1] == '\0')
		{
			char wide_value_format[] = "%.*Lg";
			wide_value_format[4] = conversion;
			return snprintf(output, size, wide_value_format, precision, value);
		}
		break;
	}
	errno = EINVAL;
	return -1;
}
