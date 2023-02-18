#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the combinations asked using putchar, then new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0; dig1 < 99; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 100; dig2++)
		{
			putchar((dig1 / 10) + '0');
			putchar((dig1 % 10) + '0');
			putchar(' ');
			putchar((dig2 / 10) + '0');
			putchar((dig2 % 10) + '0');
			if (dig1 == 98 && dig2 == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
