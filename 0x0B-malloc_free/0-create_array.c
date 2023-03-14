#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of char array(no. of element)
 * @c: the specific character to be passed
 * Return: pointer to the char array
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	while (i < size)
		ch[i++] = c;
	return (ch);
}
