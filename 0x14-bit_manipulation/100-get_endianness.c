#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *check = (char *)&i;

	if (*check)
		return (1);
	else
		return (0);
}
