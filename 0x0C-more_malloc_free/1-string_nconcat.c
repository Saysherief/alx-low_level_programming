#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: pointer to the string to concatenate with
 * @s2: pointer to the string to be concatenated
 * @n: number of bytes of s2 to be concatenated
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n > len2)
		n = len2;
	len = len1 + n + 1;
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
	concat[--i] = '\0';
	return (concat);
}
