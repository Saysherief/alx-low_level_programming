#include "main.h"

/**
 * _strcat - concatenates the second string to the first and retuns the address
 * @dest: address of the second string
 * @src: address of the first string
 * Return: address of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
