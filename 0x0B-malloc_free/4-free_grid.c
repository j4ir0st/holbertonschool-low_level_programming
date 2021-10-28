#include <stdlib.h>

/**
 * free_grid - imput
 * @grid: int argument
 * @height: int argument
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL)
	{
		for(x = 0; x < height; x++)
		{
			free(*(grid + x));
		}
		free(grid);
	}
}
