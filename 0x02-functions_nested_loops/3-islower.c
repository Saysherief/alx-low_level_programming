#include "main.h"

/**
 * _islower - Prints alphabets
 * Description - uses condition
 * Return: int 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
