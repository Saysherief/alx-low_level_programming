#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 * @src: a pointer to the string /the first char on the string
 * @dest: a pointer to copy at a destination
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
