#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previsouly allocated by malloc
 *
 * @old_size: input variable
 *
 * @new_size: input variable
 *
 * Return: str
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *ptr0;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	str = malloc(new_size);
	if (!str)
		return (NULL);

	ptr0 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str[i] = ptr0[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			str[i] = ptr0[i];
	}

	free(ptr);
	return (str);
}
