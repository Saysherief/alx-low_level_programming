#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array of intigers
 * @n : no of elements of the array
 * Return : Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
