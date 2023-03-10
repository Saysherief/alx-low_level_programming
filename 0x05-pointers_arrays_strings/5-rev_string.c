#include "main.h"

/**
 * rev_string - reverses a string and changes it
 * @s: a pointer to the string /the first char on the string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp = s[0];

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (i < len)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		i++;
		len--;
	}
}
