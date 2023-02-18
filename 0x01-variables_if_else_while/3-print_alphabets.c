#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase using putchar, then new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
