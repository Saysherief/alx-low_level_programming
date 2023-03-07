#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the address of the string
 * @to: the pointer to the char
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
