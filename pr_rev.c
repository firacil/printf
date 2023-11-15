#include "main.h"

/**
 * pr_rev - print reverse of num.
 * @args: arguments number.
 * @pr: pr char.
 * Return: printed charac..
 */

int pr_rev(va_list args, int pr)
{
	char *s = va_args(args, char *);
	int l = 0, i;

	while (s[l])
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		my_putc(s[i]);
		pr++;
	}
	return (pr);
}
