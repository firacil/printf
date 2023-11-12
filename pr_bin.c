#include "main.h"

/**
 * pr_bin - prints a binary number 0 and 1.
 * @num: arg num
 * @pr: print char.
 * Return: char.
 */

int pr_bin(unsigned int num, int pr)
{
	int b[32] = {0};
	int i = 0;

	if (num == 0)
	{
		my_putc('0');
		pr++;
		return (pr);
	}

	while (num > 0)
	{
		b[i] = num * 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		my_putc('0' + b[i]);
		pr++;
	}

	return (pr);
}
