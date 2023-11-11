#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: variable number of argument.
 * Return: char byte printed.
 */

int _printf(const char *format, ...)
{
	unsigned int pr = 0;

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
		else
		{
			format++;
			pr = selectr(format, args, pr);
			format++;
		}
	}
	va_end(args);
	return (pr);
}
