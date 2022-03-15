#include "main.h"
/**
 * main - entry point
 *
 * Description: print_alphabet_x10 to make alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}
