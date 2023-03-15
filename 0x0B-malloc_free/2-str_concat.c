#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the string to concatenate with
 * @s2: pointer to the string to be concatenated
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, len1 = 0, len2 = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2 + 1;
	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	len2 = 0;
	while (i < len)
	{
		concat[i] = s2[len2];
		i++;
		len2++;
	}
	return (concat);
}
