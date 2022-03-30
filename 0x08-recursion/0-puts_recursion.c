#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @a: string to be printed
 */

void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}

	else
		_putchar('\n');
}
