#include "main.h"

/**
 * my_str - print string.
 * @args: argument number.
 * @len: printed char.
 * Return: len.
 */

int my_str(va_list args, int len)
{
	char *s = va_arg(args, char *);

	len = 0;

	while (*s != '\0')
	{
		my_putc(*s);
		len++;
		s++;
	}
	return (len);
}
