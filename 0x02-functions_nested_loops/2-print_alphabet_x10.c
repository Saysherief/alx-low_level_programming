#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10x in lowercase
 * Description - uses the function _putchar()
 * Return: void - nothing
 */
void print_alphabet_x10(void)
{
	int alpha, i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
