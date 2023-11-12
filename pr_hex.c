#include "main.h"

/**
 * _hex - prints hexadecimal num.
 * @num: argument number.
 * @pr: printed char.
 * @uc: upper case eqiuv
 * Return: pr charachter
 */

int _hex(unsigned int num, int pr, int uc)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int rm = num % 16;

		if (rm < 10)
		{
			hex[i] = 48 + rm;
		}
		else
		{
			if (uc)
			{
				hex[i] = 65 + (rm - 10);
			}
			else
			{
				hex[i] = 97 + (rm - 10);
			}
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		my_putc('0');
		pr++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			my_putc(hex[j]);
			pr++;
		}
	}
	return (pr);
}
