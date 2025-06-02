#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees memory allocated to a
 * 2d array
 * @grid: pointer to the 2d array
 * @height: size of row
 * Return: Nothing
*/void free_grid(int **grid, int height);
void free_grid(int **grid, int height)
{
	int i, j;

	size_t width = sizeof(grid) / grid[0][0];

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[i][j]);
		}
	}

	free(grid);
}
