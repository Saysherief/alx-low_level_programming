#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: a pointer to the string /the first char on the string
 * Return: Nothing
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
