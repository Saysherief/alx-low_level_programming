#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Description - computes using conditions
 * @n: an intiger
 * Return: absolute value of the given intiger
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
