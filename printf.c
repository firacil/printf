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

	if (!format[pr] || (format[pr + 1] == ' ' && format[pr + 2]))
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			pr = selectr(format, args, pr);
			format++;
		}
		else
		{
			my_putc(*format);
			pr++;
			format++;
		}
	}
	va_end(args);
	return (pr);
}
