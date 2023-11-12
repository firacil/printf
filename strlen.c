#include "main.h"

/**
 * _strlen - produce length of string.
 * @s: string.
 * Return: number.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
