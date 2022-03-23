#include "main.h"

/**
 * _strcmp - compares two strings
 * s1: first string to be compared
 * s2: second string to be compared
 * return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i=strcmp(s1,s2);
	if(i==0)
		_putchar(0);
	else
		_putchar(1);
	return 0;
}
