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
 * @c: string.
 * Return: bytes number counted.
 */

int my_puts(char *c)
{
	int count_s;

	if (c)
	{
		for (count_s = 0; c[count_s] != '\0'; count_s++)
		{
			my_putc(c[count_s]);
		}
	}

	return (count_s);
}
