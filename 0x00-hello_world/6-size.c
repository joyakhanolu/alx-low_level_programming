<<<<<<< HEAD
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
=======
#include <stdio.h>

/**
* main-Prints size of characters
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
  printf("Size of a char: %zu byte(s)\n", sizeof(char));
  printf("Size of an int: %zu byte(s)\n", sizeof(int));
  printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
  printf("Size of a float: %zu byte(s)\n", sizeof(float));
  return (0);
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
>>>>>>> 9530b8c0a269284ea06f4d6282302b4976c6a449
