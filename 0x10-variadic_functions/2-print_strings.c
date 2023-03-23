#include "variadic_functions.h"

/**
 * print_strings  - prints strings followed by new line
 * @separator: the string to be printed between the strings
 * @n: the count of remaining arguments
 * or the number of strings passed to the function
 * Return: nothing
 * descriptions - If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i == (n - 1) || separator == NULL)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
