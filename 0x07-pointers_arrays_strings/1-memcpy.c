#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: address of the memory to be updated
 * @src: address of memory to be copied
 * @n: the 1st n bytes of memory area to be copied
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
