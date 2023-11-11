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
 * @lis: variadic.
 * Return: index..
 */

int my_puts(va_list lis)
{
	char *str;
	int i;

	str = va_arg(lis, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		my_putc(str[i]);
		i++;
	}

	va_end(lis);
	return (count_s);
}
