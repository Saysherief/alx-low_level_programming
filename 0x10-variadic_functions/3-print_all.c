#include "variadic_functions.h"

/**
 * print_all - prints anything listed followed by new line
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list lists;
	unsigned int i = 0, j, flag = 0;
	char *str;
	const char b_format[] = "cifs";

	va_start(lists, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lists, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(lists, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(lists, double)), flag = 1;
				break;
			case 's':
				str = va_arg(lists, char *), flag = 1;
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
		j = 0;
		while (b_format[j])
		{
			if (flag && (format[i] == b_format[j]))
			{
				printf(", ");
				break;
			} j++;
		}
	} printf("\n");
	va_end(lists);
}
