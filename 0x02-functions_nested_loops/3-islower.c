#include "main.h"

/**
 * _islower - retutns 1 for lower alphabets and 0 for the rest
 * Description - uses the parameter @c to test the condition
 * parameter 'c': The character to check the ASCII code
 * Return: int 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
