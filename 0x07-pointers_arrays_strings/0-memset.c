#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address of the string to be updated
 * @b: the constant byte to be filled with
 * @n: the 1st n bytes of memory area to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
