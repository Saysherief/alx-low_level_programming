#include "main.h"

/**
 * _islower - Prints alphabets
 * Description - uses condition
 * Return: int 0 or 1
 */
int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
