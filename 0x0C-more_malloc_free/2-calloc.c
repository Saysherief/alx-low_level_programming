#include "main.h"

/**
 * _calloc - allocates memory of an array
 * and memory is set to zero
 * @nmemb: memory of an array(no. of element)
 * @size: no. of bytes
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	while (i < (nmemb * size))
		ch[i++] = 0;
	return (ch);
}
