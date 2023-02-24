#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @size : number of times # should be printed
 * line should end with new line
 * Return : Nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar('#');
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
