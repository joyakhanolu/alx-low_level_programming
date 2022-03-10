#include <stdio.h>

/**
 *main - stsrts the main program
 *description: prints the size of various on the computer it is compiled
 *Return: Always 0 it is true
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
