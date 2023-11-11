#include "main.h"

/**
 * my_putc - print char..
 * @c: charachter.
 * Return: c.
 */

int my_putc(char c)
{
	return (write(1, &c, 1));
}
