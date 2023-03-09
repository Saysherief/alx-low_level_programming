#include "main.h"

/**
 * _strlen_recursion - calculates the length of the string
 * @s  : pointer to the string
 * Return: integer which is the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
