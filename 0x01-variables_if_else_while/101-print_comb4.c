#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the combinations asked using putchar, then new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig;
	int mdig;
	int ldig;

	for (dig = 0; dig < 10; dig++)
	{
		for (mdig = dig + 1; mdig < 10; mdig++)
		{
			for (ldig = mdig + 1; ldig < 10; ldig++)
			{
				putchar(dig + '0');
				putchar(mdig + '0');
				putchar(ldig + '0');
				if (dig == 7 && mdig == 8 && ldig == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
