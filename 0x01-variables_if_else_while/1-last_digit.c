#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - random number to the variable n
 * The last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	dig = n % 10;

	if (dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dig);
	else if (dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
	return (0);
}
