#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: address of the string
 * @accept: any bytes in it to be searched
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return ('\0');
}
