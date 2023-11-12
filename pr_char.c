#include "main.h"

/**
 * my_chr - prints char.
 * @args: number of arguments
 * @i: is integer.
 * Return: print success
 */

int my_chr(va_list args, int i)
{
	char c = va_arg(args, int);

	my_putc(c);
	return (i += 1);
}
