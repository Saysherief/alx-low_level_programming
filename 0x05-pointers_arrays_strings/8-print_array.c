#include<stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * Description - uses the function printf()
 * @a : array of an intiger
 * @n : number of elements of the arrays to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i  < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			break;
		printf(", ");
	}
	printf("\n");
}
