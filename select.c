#include "main.h"

/**
 * selectr - gives selection specifiers
 * @format: variable argument.
 * @args: retrival of arguments
 * @pr: printed charachter count.
 * Return: return char.
 */

int selectr(const char *format, va_list args, int pr)
{

	switch (*format)
	{
		case 'd':
		case 'i':
			pr = integer(args, pr);
			break;

		case 'c':
			my_putc(va_arg(args, int));
			break;
		case 's':
			pr = my_str(args, pr);
			break;
		case '%':
			pr_per();
			break;
		case 'b':
			pr = pr_bin(va_arg(args, unsigned int), pr);
			break;
		case 'x':
		case 'X':
			pr = _hex(va_arg(args, unsigned int), pr, (*format == 'X') ? 1 : 0);
			break;
		default:
			break;

	}
	va_end(args);
	return (pr);
}
