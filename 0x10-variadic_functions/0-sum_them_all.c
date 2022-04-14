#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n - number of paramters passed to the function.
 * @... - variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameter;
	unsigned int k, sum = 0;

	va_start(parameter, n);

	for (k = 0; k < n; k++)
		sum += va_arg(parameter, int);

	va_end(parameter);

	return (sum);
}
