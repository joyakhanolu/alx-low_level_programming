#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks for digit
 *
 * @s: string operand
 *
 * Return: 0 or 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - string length
 *
 * @s: string operand
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, n, digit1, digit2, *ptr, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		ptr[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = s1[l1] - '0';
		n = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			digit2 = s2[l2] - '0';
			n += ptr[l1 + l2 + 1] + (digit1 * digit2);
			ptr[l1 + l2 + 1] = n % 10;
			n /= 10;
		}
		if (n > 0)
			ptr[l1 + l2 + 1] += n;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (ptr[i])
			a = 1;
		if (a)
			_putchar(ptr[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
