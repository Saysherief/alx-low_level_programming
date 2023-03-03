#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: a pointer to the string
 * Return: address of the changed string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/*letters to be coded*/
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	/*rotated to  code*/

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rotated[j];/*assignes the coresponding code*/
				break;
			}
		}
		i++;
	}
	return (s);
}
