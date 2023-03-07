#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: address of the string
 * @needle: address of the substring to be located
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0, o;/*o pointer at 1st occurance*/

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			for (o = i + 1; haystack[o] != '\0' && needle[j++] != '\0'; o++)
			{
				if (haystack[o] == needle[j])
				{
					if (needle[j + 1] == '\0')
						return (haystack + i);
					continue;
				}
				else
				{
					break;
				}
			}
		}
	}
	if (needle[0] == '\0')
		return (haystack);
	return ('\0');
}
