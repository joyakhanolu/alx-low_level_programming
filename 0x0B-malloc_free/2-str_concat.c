#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string to be concatenated on.
 * @s2: The string to be concatenated to s1.
 * Return: NULL on failure, otherwise, the newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int con, concat_con = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (con = 0; s1[con] || s2[con]; con++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (con = 0; s1[con]; con++)
		concat_str[concat_con++] = s1[con];

	for (con = 0; s2[con]; con++)
		concat_str[concat_con++] = s2[con];

	return (concat_str);
}
