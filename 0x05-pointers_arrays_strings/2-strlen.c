#include "main.h"

/**
 * int _strlen - returns the length of a string
 *
 * @s: a pointer to the string the first charon the string
 * Return: an integer which is the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
