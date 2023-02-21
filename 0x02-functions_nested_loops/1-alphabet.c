#include "main.h"

/**
 * print_alphabet - Prints alphabets
 * Description - uses the function _putchar()
 * Return: void - nothing
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
