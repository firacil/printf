#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: variable number of argument.
 * Return: no of bytes printed..
 */

int _printf(const char *format, ...)
{
	unsigned int i, count_c, s_count;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putc(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			my_putc(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_count = my_puts(va_arg(args, char *));
			i++;
			count_c += (s_count - 1);

		}
		else if (format[i + 1] == '%')
		{
			my_putc('%');
		}
		count_c++;
	}

	return (count_c);
}
