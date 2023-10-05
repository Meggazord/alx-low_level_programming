#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: The grid to be freed.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}