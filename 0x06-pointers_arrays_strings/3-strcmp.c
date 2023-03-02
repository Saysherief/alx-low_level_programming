#include "main.h"

/**
 * _strcmp - compares the two strings and returns value respectively
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: value of the comparision
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((s1[i] - s2[i]));
		i++;
	}
	return (0);
}
