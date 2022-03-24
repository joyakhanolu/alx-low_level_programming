#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * #n: the number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp, arr[];
	while (*a < n)
	{
		temp = arr[*a];
		arr[*a] = arr[n];
		arr[n] = temp;
		*a++;
		n--;
	}
}
