#include<stdio.h>

/**
 * main - program that prints the first 98 Fibonacci numbers, like 1, 2, 3...
 * Description - uses the function printf()
 * Return: Always 1
 */
int main(void)
{
	int i;
	unsigned long long int sum1 = 0, sum2 = 1;
	unsigned long long int fib;

	for (i = 0; i  < 98; i++)
	{
		fib = sum1 + sum2;
		sum1 = sum2;
		sum2 = fib;
		printf("%llu", fib);
		if (i == 97)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
