#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: the pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, i;

	if (array == NULL)
		return (-1);
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			if (i == l)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");
		i = (l + h) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			l = i + 1;
		else
			h = i - 1;
	}
	return (-1);
}
