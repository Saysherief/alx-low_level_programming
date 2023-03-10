#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: address of the string
 * @c: the character to be searched
 * Return: a pointer to the memory area dest where c first occured
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
