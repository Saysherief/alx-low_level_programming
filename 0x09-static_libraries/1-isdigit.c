#include "main.h"

/**
 * _isdigit - returns 1 for digits and 0 for the rest
 * Description - uses the parameter @c to test the condition
 * @c: The character to check the ASCII code
 * Return: 1 if it is a digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
