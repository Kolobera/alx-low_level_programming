#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2-dimensional array
 * @grid: 2-dimensional array
 * @height: height of array
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
