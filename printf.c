#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: variable number of argument.
 * Return: always return char byte.
 */

int _printf(const char *format, ...)
{
	int pr = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[pr] == '%' && format[pr + 1] == '\0'))
		return (-1);

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
	my_putc('\n');
	return ();
}
