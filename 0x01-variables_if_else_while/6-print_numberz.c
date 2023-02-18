#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase using putchar, then new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar(dig + '0');
	}
	putchar('\n');
	return (0);
}
