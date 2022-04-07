#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
int *k = malloc(b);
if (k == 0)
	exit(98);

return (k);
}
