#include<stdio.h>

/**
 * main - program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Description - uses the function printf()
 * Return: Always 1
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i  < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
