#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: a pointer to the string
 * Return: address of the changed string
 */
char *leet(char *s)
{
	int i = 0, j;
	char l[10] = "AaEeOoTtLl";/*letters to be coded*/
	char n[10] = "4433007711";/*numerical code*/

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];/*assignes the coresponding code*/
		}
		i++;
	}
	return (s);
}
