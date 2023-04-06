#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if in the string other than 0 or 1
 * or if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint <<= 1;
		if (b[i] == '1')
			uint += 1;
		i++;
	}
	return (uint);
}

