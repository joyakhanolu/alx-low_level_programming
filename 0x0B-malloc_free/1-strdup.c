#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: 0
 */

char *_strdup(char *str)
{
int i = 0, size = 0;
char *k;

if (str == NULL)
	return (NULL);

for (; str[size] != '\0'; size++)
;


k = malloc(size * sizeof(*str) + 1);

if (k == 0)
	return (NULL);
else
{
	for (; i < size; i++)
		k[i] = str[i];
}
return (k);
}
