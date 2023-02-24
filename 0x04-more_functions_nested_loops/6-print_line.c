#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n : number of times _ shoulld be printed
 * line should end with new line
 * Return : Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
