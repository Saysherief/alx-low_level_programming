#include "main.h"

/**
 * array_range - creates an array of integers
 * @max: max value
 * @min: min value
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i++] = min;
		min++;
	}
	return (array);
}
