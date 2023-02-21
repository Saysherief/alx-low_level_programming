#include "main.h"

/**
 * _isalpha- checks if 'c' is among alphabets ALPHABETS
 * Description - uses condition to check member 'c'
 * @c: the character to be checked
 * Return: int 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
