#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees up a 2d grid created by script 3
 * @grid: pointer to a pointer. 2d array. a grid
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k = 0;

	if (grid == NULL || height <= 0)
		return;
	while (k < height)
	{
		free(grid[k]);
		k++;
	}
	free(grid);
}
