#include "main.h"

/**
 *  print_numbers - Entry point
 * Description:  A function that prints the numbers,
 *  from 0 to 9, followed by a new line.
 * @void: it receives no parameter ..
 * Return: Returns nothing
 */

void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
