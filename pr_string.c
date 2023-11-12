#include "main.h"

/**
 * my_str - prints string.
 * @args: arguments number.
 * @len: counting byt.
 * Return:  character.
 */

int my_str(va_list args, int len)
{
	int i;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			my_putc(s[i]);
		return (len);
	}

	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			my_putc(s[i]);
		return (len);
	}
}
