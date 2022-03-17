#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: A function that prints the numbers,
 *  from 0 to 9, followed by a new line.
 *  Does not print 2 and 4
 * @void: it receives no parameter ..
 * Return: Returns nothing
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
