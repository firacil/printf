#include "main.h"

/**
 * selectr - gives selection specifiers
 * @format: variable argument.
 * @args: retrival of arguments
 * @i: printed charachter count.
 * Return: printed charachter.
 */

int selectr(const char *format, va_list args, int i)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			i = integer(args, i);
			break;

		case 'c':
			my_putc(va_arg(args, int));
			i++;
			break;
		case 's':
			i = my_str(args, i);
			break;

		case '%':
			my_putc('%');
			i++;
			break;
		default:
			break;

	}
	return (i);
}
