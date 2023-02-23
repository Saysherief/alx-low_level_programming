#include<stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers, like 1, 2, 3...
 * Description - uses the function printf()
 * Return: Always 1
 */
int main(void)
{
	int i;
	int sum1 = 0, sum2 = 1;
	int fib;

	for (i = 0; i  < 50; i++)
	{
		fib = sum1 + sum2;
		sum1 = sum2;
		sum2 = fib;
		printf("%d", fib);
		if (i == 49)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
