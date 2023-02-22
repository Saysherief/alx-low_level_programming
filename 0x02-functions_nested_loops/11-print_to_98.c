#include<stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * Description - uses the function printf()
 * @n: an integer
 * Return: void - nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i  < 99; i++)
		{
			printf("%d", (n++));
			if (n == 99)
				break;
			printf(", ");
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", (n--));
			if (n == 97)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
