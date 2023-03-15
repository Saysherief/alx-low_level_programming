#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: of the array grid
 * @height: of the array grid
 * Return: pointer to the 2 dimensional array of int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
