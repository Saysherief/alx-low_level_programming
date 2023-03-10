#include "main.h"

/**
 * check - checks if the square root is a natural number
 * @n: given number
 * @a: the square root to be checked
 * Return: integer answer
 */
int check(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return(-1);
	return (check(n, a + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a given number
 * only if its a natural square root
 * @n: the input number
 * Return: integer which is the answer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (check(n, 1));
}
