#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s  : pointer to the string to be printed
 * Returns : nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
