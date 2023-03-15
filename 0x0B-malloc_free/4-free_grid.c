#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc+grid function
 * @grid: address of the 2 dimentional  grid
 * @height: of the array grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
