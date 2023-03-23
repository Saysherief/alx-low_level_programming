#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n: the count of remaining arguments
 * or the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, unsigned int));
			if (i == (n - 1))
				break;
			printf("%s ", separator);
		}
		va_end(nums);
		printf("\n");
	}
}
