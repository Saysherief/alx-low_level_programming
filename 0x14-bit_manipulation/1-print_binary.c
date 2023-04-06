#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the unsigned decimal number to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int scan = 1;
	int i;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & scan)
			_putchar('1');
		else
			_putchar('0');
	}
}
