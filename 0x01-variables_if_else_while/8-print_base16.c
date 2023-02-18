#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the question asked on the task followed by  new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig;
	char b16 = 'a';

	for (dig = 0; dig < 16; dig++)
	{
		if (dig > 9)
		{
			putchar(b16);
			b16++;
			continue;
		}
		putchar(dig + '0');
	}
	putchar('\n');
	return (0);
}
