#include "main.h"

/**
 * my_str - prints string.
 * @args: arguments number.
 * @count: counting byte printed.
 * Return: printed charachter.
 */

int my_str(va_list args, int count)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
		return (count);
	}

	while (*s != '\0')
	{
		my_putc(*s);
		count++;
		s++;
	}
	return (count);
}
