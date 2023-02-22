#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * Description - uses the function _putchar()
 * @n: is an integer
 * Return: void - nothing
 */
void print_times_table(int n)
{
	int dig1;
	int dig2;
	int ans;

	if (n >= 0 && n <= 15)
	{
		for (dig1 = 0; dig1 <= n; dig1++)
		{
			for (dig2 = 0; dig2 <= n; dig2++)
			{
				ans = dig1 * dig2;
				if ((ans / 10) == 0)
				{
					if (dig2 != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((ans % 10) + '0');
				}
				else if ((ans / 100) == 0)
				{
					_putchar(' ');
					_putchar((ans / 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else
				{
					_putchar((ans / 100) + '0');
					_putchar(((ans / 10) % 10) + '0');
					_putchar((ans % 10) + '0');
				}
				if (dig2 == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
