#include "main.h"

/**
 * _strcmp - compares the two strings and returns value respectively
 * @s2: address of the second string
 * @s1: address of the first string
 * Return: value of the comparision
 */
int *_strcmp(char *s1, char *s2)
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
