#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - a function (variadic) that prints on the std output.
 * @format: string to be printrd.
 * @...: other argments(s) that its/their format specifier(s)
 * is/are in the format string.
 * Return: the length of string printed.
*/

int _printf(const char *format, ...)
{
	va_list printf;

	int charprinted = 0;
	int a = 0;

	va_start(printf, format);

	if (format == NULL)
		return (-1);

	while (format[a] != '\0')
	{
		if (format[a] != '%')
			vaule += write(1, &format[a], 1);
		else
			vaule += print_format(*(++format), printf);
		++format;
	}
	va_list end
	
	return (value);
}
