#include "main.h"

/**
 * main - Prints alphabets
 * Description: uses the function _putchar()
 * Return: Always 0.
 */
int main(void)
{
	int alpha;

	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
