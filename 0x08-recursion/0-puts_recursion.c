#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s  : pointer to the string to be printed
 * Returns : nothing
 */
void _puts_recursion(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		_puts_recursion(s[i + 1]);
		_putchar(s[i]);
	}
	_putchar('\n');
}
