#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer, from 00:00 to 23:59
 * Description - uses the function _putchar()
 * Return: void - nothing
 */
void jack_bauer(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0; dig1 < 24; dig1++)
	{
		for (dig2 = 0; dig2 < 60; dig2++)
		{
			_putchar((dig1 / 10) + '0');
			_putchar((dig1 % 10) + '0');
			_putchar(':');
			_putchar((dig2 / 10) + '0');
			_putchar((dig2 % 10) + '0');
			if (dig1 == 23 && dig2 == 59)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
