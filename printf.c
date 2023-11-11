#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: variable number of argument.
 * Return: char byte printed.
 */

int _printf(const char *format, ...)
{
	int pr = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			my_putc(*format);
			pr++;
			format++;
		}
		else if (*format == '%')
		{
			format++;
			pr = selectr(format, args, pr);
			pr++;
		}
	}
	va_end(args);
	return (pr);
}
