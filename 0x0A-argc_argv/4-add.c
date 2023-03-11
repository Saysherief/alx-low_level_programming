#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int sum = 0, len;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	while (--argc)
	{
		len = 0;
		while (argv[argc][len] != '\0')
		{
			if (!isdigit(argv[argc][len++]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
