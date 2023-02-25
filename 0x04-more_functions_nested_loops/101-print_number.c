#include "main.h"

/**
 * print_number - prints the number taken in the argument
 * Description: prints using _putchar, then new line
 * @n: input integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int dig, value, subs;

	dig = 1;
	value = n;
	subs = n;
	if (n < 0)
	{
		_putchar('-');
		value *= (-1);
		subs *= (-1);
	}
	while (subs > 9)
	{
		subs /= 10;
		dig *= 10;
	}
	for (; dig >= 1; dig /= 10)
	{
		_putchar(((value / dig) % 10) + '0');
	}
}
