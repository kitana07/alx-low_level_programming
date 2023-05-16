#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees 2 dimensional array
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
	free(grid[c]);
	}
	free(grid);
}
