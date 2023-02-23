#include<stdio.h>

/**
 * main - program that prints the sum of the even-valued Fibonacci numbers
 * Description - uses the function printf()
 * Return: Always 1
 */
int main(void)
{
	int i;
	int sum1 = 0, sum2 = 1;
	int fib;

	for (i = 0; i  < 40; i++)
	{
		fib = sum1 + sum2;
		sum1 = sum2;
		sum2 = fib;
		if (fib <= 4000000 || (fib % 2) == 0)
		{
			printf("%d", fib);
			if (i == 49 || fib > 4000000)
				break;
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
