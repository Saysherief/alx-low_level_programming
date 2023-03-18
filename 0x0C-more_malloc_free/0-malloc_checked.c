#include "main.h"

/**
 * cmalloc_checked - allocates memory using malloc
 * @b: the size of the array to be allocated
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	char *ch;

	if (b == 0)
		exit (98);
	ch = malloc(b);
	if (ch == NULL)
		exit (98);
	return (ch);
}
