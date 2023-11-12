#include "main.h"

/**
 * my_chr - prints char.
 * @args: arguments.
 * @count: byte countee.r
 * Return: print.
 */

int my_chr(va_list args, int count)
{
	char c = va_arg(args, int);

	my_putc(c);
	return (count++);
}
