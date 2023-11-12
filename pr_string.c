#include "main.h"

/**
 * my_str - prints string.
 * @args: arguments number.
 * @len: counting byt.
 * Return:  character.
 */

int my_str(va_list args, int len)
{
	char *s = va_arg(args, char *);

	while (*s != '\0')
	{
		_myputc(*s);
		len++
		s++;
	}
	return (len);
}
