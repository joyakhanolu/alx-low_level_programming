#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * @s - pointer to the constant byte
 * @b - constant byte
 * @n - number of bytes to be used
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n>0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
