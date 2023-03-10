#include "main.h"

/**
 * _strncat - concatenates the second string up to n byte to the first string
 * @dest: address of the second string
 * @src: address of the first string
 * @n : nbytes from the 2nd string
 * Return: address of the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
