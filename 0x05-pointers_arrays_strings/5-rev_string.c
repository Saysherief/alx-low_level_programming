#include "main.h"

/**
 * rev_string - reverses a string and changes it
 * @s: a pointer to the string /the first char on the string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int rlen = 0;
	char *rev = s;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		rev[rlen] = s[len];
		len--;
		rlen++;
	}
	rev[rlen] = '\0';
	s = rev;
}
