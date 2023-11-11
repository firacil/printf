#include "main.h"

/**
 * selectr - gives selection specifiers
 * @format: variable argument.
 * @args: retrival of arguments
 * @pr: printed charachter count.
 * Return: printed charachter.
 */

int selectr(const char *format, va_list args, int pr)
{
	int count;

	switch (*format)
	{
		case 'd':
		case 'i':
			pr = integer(args, pr);
			count++;
			break;

		case 'c':
			my_putc(va_arg(args, int));
			pr++;
			break;
		case 's':
			pr = my_str(args, pr);
			break;

		case '%':
			my_putc('%');
			pr++;
			break;
		default:
			break;

	}
	va_end(args);
	return (pr);
}
