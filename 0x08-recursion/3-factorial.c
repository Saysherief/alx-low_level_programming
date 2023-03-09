#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the input number
 * Return: integer which is the answer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
