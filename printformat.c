#include "main.h"

int print_format(char format, va_list printf)
{
	int value;

	if (format == 'c')
		value += print_char(va_list(printf, int);
	else if (format == 's')
		value += print_string(va_list(printf, char*);
	else if (format == '%')
		value += _putchar(37 +'0');
	else if (format == 'd' || format == 'i')
		value += print_int(va_list(printf, int);
	else if (format == 'o')
		value += print_octal(va_list(printf, int);
	else if (format == 'u')
		value += print_u(va_list(printf, int);
	else if (format == 'x')
		value += print_hex(va_list(printf, int);
	else if (format == 'X')
		value += print_Hex(va_list(printf, int);
	else if (format == 'r')
		value += print_r(va_list(printf, char*);
	else if (format == 'S')
		value += print_S(va_list(printf, char*);
	else if (format == 'R')
		value += print_R(va_list(printf, char*);

	return (value);
}
