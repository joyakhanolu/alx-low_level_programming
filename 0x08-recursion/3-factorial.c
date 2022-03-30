#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a given number
 * @n - given number
 * Return: n > 0 - factorial of n
 * n < 0 - 1 to indicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	reuslt *= factorial(n - 1);

	return (result);
}
