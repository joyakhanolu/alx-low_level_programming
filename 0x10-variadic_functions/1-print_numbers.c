#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator - string to be printed between numbers.
 * @n - number of integers passed to the function.
 * @... : variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int k;

	va_start(num, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(num, int));

		if (k == (n - 1) && separator == NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
