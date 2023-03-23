#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the count of remaining arguments
 *
 * Return: result of the remaining arguments added
 * or If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
