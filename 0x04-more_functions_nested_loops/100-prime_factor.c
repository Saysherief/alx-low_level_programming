#include <stdio.h>

/**
 * main - Starting point of the function
 * finds largest prime factor & prints it
 * Return: Always 0.
 */

int main(void)
{
	unsigned long num, lpf;

	num = 612852475143;
	for (lpf = 2; fp <= num; lpf++)
	{
		if (num % lpf == 0)
		{
			num /= lpf;
			lpf--;
		}

	}
	printf("%lu\n", lpf);
	return (0);
}
