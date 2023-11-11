#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: variable number of argument.
 * Return: char byte printed.
 */

int _printf(const char *format, ...)
{
	int i = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i = selectr(format, args, i);
			format++;
		}
		else
		{
			my_putc(*format);
			i++;
			format++;
		}
	}
	va_end(args);
	return (i);
}
