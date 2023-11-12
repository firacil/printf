#include "main.h"

/**
 * my_chr - prints char.
 * @args: arguments.
 * Return: print success
 */

int my_chr(va_list args)
{
	char c = va_arg(args, int);

	my_putc(c);
	return (1);
}
