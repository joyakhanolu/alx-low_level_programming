#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - res
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
