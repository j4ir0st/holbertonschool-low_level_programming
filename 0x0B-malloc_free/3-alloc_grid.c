#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: int argument
 * @height: int argument
 * Return: returns s_conc
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		*(arr + row) = malloc(sizeof(int) * width);
		if (arr == NULL)
		{
			free(arr + row);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			*(*(arr + row) + col) = 0;
		}
	}
	return (arr);
}
