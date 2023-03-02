#include "main.h"

/**
 * _strncpy - copies the second string up to n byte on the first string
 * @dest: address of the second string
 * @src: address of the first string
 * @n : n bytes from the 2nd string
 * Return: address of the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
