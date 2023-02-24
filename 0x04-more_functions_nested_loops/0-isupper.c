#include "main.h"

/**
 * _isupper - retutns 1 for uppercase letters and 0 for the rest
 * Description - uses the parameter @c to test the condition
 * @c: The character to check the ASCII code
 * Return: 1 if it is an uppercase character else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
