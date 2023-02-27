#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: a pointer to the string /the first char on the string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if ((len % 2) == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
