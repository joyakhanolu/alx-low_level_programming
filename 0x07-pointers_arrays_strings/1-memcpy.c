#include "main.h"

/**
 * *memcpy - copies memory area
 * @dest - destination area
 * @src - source area
 * @n - length of src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i=0; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
