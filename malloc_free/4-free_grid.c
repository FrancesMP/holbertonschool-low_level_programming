#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: pointer to the 2D array
 * @height: number of rows in the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
