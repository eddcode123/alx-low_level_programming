#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees memory allocated to a 2D array.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the array.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
