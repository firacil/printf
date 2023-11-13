#include "main.h"

/**
 * integer - prints integer.
 * @args: argument numbers.
 * @pr: charachter printed
 * Return: character number
 */

int integer(va_list args, int pr)
{
	int n = va_arg(args, int);
	int digit = 0;
	int temp = n;
	int d;

	if (n < 0)
	{
		pr += my_putc('-');
		n = -n;


		temp = n;
	}

	do {
		digit++;
		temp /= 10;
	} while (temp != 0);

	while (digit > 0)
	{
		int pow = 1;
		int i;

		for (i = 1; i < digit; i++)
		{
			pow *= 10;
		}
		d = n / pow;
		pr += my_putc(d + '0');
		n -= d * pow;
		digit--;
	}
	return (pr);
}
