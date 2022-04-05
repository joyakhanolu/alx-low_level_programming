#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
int **tab, j, k;
tab = malloc(sizeof(*tab) * height);

if (width <= 0 || height <= 0 || tab == 0)
	return (NULL);

else
{
	for (j = 0; j < height; j++)
	{
		tab[j] = malloc(sizeof(**tab) * width);
		if (tab[j] == 0)
		{
			/*Free everything if malloc fails*/
			while (j--)
				free(tab[j]);
			free(tab);
			return (NULL);
		}

		for (k = 0; k < width; k++)
			tab[j][k] = 0;
	}
}

return (tab);
}
