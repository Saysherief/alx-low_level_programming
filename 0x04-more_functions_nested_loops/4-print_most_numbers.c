#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 * Description: prints using _putchar, then new line
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		if (dig == 2 || dig == 4)
			continue;
		_putchar(dig + '0');
	}
	_putchar('\n');
}
