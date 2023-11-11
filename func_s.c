#include "main.h"

/**
 * pr_percent - print percent
 * @args: list of arg.
 * @buffer: buffer array to handle.
 * @flags: active flags.
 * @width: get width
 * @pr: precision specification.
 * @size: size spec...
 * Return: no of printed char.
 */

int pr_percent(va_list args, char buffer[],
		int flags, int width, int pr, int size)
{
	UNUSED(args);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(pr);
	UNUSED(size);

	return (write(1, "%%", 1));
}
