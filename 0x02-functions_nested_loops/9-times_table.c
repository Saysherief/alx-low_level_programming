#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Description - uses the function _putchar()
 * Return: void - nothing
 */
void times_table(void)
{
	int dig1;
	int dig2;
	int ans;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig2 = 0; dig2 < 10; dig2++)
		{
			ans = dig1 * dig2;
			if ((ans / 10) == 0)
			{
				if (dig2 != 0)
					_putchar(' ');
				_putchar((ans % 10) + '0');
			}
			else
			{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			if (dig2 == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
