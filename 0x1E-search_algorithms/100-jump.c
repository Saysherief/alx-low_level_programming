#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: the pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[(size_t)fmin(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		start = step;
		step += sqrt(size);
		if (start >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, step);
	while (array[start] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start += 1;
		if (start == (size_t)fmin(step, size))
			return (-1);
	}
	if (array[start] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		return (start);
	}
	return (-1);
}
