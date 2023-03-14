#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to the string to be copied
 * Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	dup = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
