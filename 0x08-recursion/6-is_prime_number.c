#include "main.h"

/**
 * check - checks if the number is divisible
 * @n: given number
 * @a: the devisor to check the prime number
 * Return: integer answer
 */
int check(int n, int a)
{
	if (n % a == 0)
		return (0);
	else if (a > n / 2)
		return (1);
	else
		return (check(n, a + 1));
}

/**
 * is_prime_number - checks if a given number is prime
 * @n: the input number
 * Return: integer which is the answer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (check(n, 2));
}
