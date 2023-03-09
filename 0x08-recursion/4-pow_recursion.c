#include "main.h"

/**
 *  _pow_recursion - calculates the value x raised to the power of y
 * @x: the input number
 * @y: the power
 * Return: integer which is the answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
