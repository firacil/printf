#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: variable number of argument.
 * Return: no of bytes printed..
 */

int _printf(const char *format, ...)
{
	int i, count_c = 0, s_count = 0;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putc(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			my_putc(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s_count = my_puts(va_arg(args, char *));
			i++;
			count_c += (s_count - 1);

		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			my_putc('%');
		}
		count_c += 1;
	}

	va_end(args);
	return (count_c);
}
