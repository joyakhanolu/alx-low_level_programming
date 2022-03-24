#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (str[i] == data1[k])
			{
				str[i] = datarot[k];
				break;
			}
		}
	}
	return (str);
}
