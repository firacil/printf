#include "main.h"

/**
 * my_putc - print charachter.
 * @c: charachter.
 * Return: number of bytes
 */
int my_putc(char c)
{
	return (write(1, &c, 1));
}

/**
 * my_puts - print string.
 * @c: index of char..
 * Return: index..
 */

int my_puts(char *c)
{
	int i;

	if (c)
	{
		for (i = 0; c[i] != '\0'; c++)
		{
			my_putc(c[i]);
		}
	}

	return (i);
}
