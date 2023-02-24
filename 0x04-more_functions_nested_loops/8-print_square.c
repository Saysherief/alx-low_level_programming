#include "main.h"

/**
 * print_square - draws a square using # in the terminal
 * @size : the size of square to be printed
 * line should end with new line
 * Return : Nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
