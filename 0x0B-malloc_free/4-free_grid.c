#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that free grid
 *
 * @grid: grid
 * @height: height of grid
 *
 * Return: anything
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
