#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **y;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	y = (int **) malloc(sizeof(int *) * height);

	if (y == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		y[i] = (int *) malloc(sizeof(int) * width);
		if (y[i] == NULL)
		{
			free(y);
			for (j = 0; j <= i; j++)
				free(y[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			y[i][j] = 0;
		}
	}
	return (y);
}
