#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a : pointer to the string to be printed
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar (a[i / 8][i - j]);
	}
	_putchar('\n');
}
