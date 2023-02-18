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
	int ldig1;
	int dig2;
	int ldig2;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (ldig1 = 0; ldig1 < 10; ldig1++)
		{
			for (dig2 = dig1; dig2 < 10; dig2++)
			{
				for (ldig2 = ldig1; ldig2 < 10; ldig2++)
				{
					if (dig1 == dig2 && ldig1 == ldig2)
						continue;
					putchar(dig1 + '0');
					putchar(ldig1 + '0');
					putchar(' ');
					putchar(dig2 + '0');
					putchar(ldig2 + '0');
					if (dig1 == 9 && ldig1 == 8)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
