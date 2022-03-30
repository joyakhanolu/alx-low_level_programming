#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * *s: string to be reversed
 */
void _print_rev_recursion(char *a)
{
	if (*a)
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
