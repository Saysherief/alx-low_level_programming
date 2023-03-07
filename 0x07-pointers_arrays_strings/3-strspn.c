#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: address of the string
 * @accept: the string to be checked in s
 * Return: no. of bytes in the initial segment of s consisting bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0, check = 0;

	for (i = 0; (s[i] != '\0'); i++)
	{
		check = 0; /*to check and return for 1st time*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1; /*similarity caught for 1st time*/
				n++;
				break; /*to check the next char of the string*/
			}
		}
		if (check == 0)
			break; /*no similarity detected afterwards*/
	}
	return (n);
}
