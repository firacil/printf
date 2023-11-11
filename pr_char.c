#include "main.h"

/**
 * my_chr - prints charachter.
 * @args: argument number.
 * @count: byte printed counted.
 * Return: printed charchter.
 */

int my_chr(va_list args, int count)
{
	int c = va_arg(args, int);

	my_putc(c);
	return (count += 1);
}
