#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Description: prints using _putchar, then new line
 * Return: Nothing
 */
void print_numbers(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		_putchar(dig + '0');
	}
	_putchar('\n');
}
