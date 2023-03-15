#include "main.h"

/**
 * free_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: of the array grid
 * @height: of the array grid
 * Return: pointer to the 2 dimensional array of int
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
