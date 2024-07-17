#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to a 2D array
 * Returns null on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **pARR;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	pARR = malloc(sizeof(int *) * height);

	if (pARR == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pARR[i] = malloc(sizeof(int) * width);

		if (pARR[i] == NULL)
		{
			free(pARR);
			for (j = 0; j <= height; j++)
				free(pARR[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			pARR[i][j] = 0;
	}
	return (pARR);
}
