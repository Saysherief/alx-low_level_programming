#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description - computes using modulo
 * @n: an intiger
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	n = n % 10;
	n = _abs(n);
	_putchar('0' + n);
	return (n);
}
