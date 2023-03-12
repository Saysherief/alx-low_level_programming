#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int no_cents = 0, len = 0;
	int change, rem;
	int changes[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc-- != 2)/*goes to index value of amount inserted using--*/
	{
		printf("Error\n");
		return (1);
	}
	if (argv[argc][0] == '-')
		len++;
	while (argv[argc][len] != '\0')
	{
		if (!isdigit(argv[argc][len++]))
		{
			printf("Error\n");
			return (1);
		}
	}
	if ((argv[argc][0] == '-') && (argv[argc][len] == '\0'))
	{
		printf("0\n");
		return (0);
	}
	change = atoi(argv[argc]) / changes[i];
	no_cents += change;/*adds no of coins of the change*/
	rem = atoi(argv[argc]) % changes[i];/*remaining amount*/
	change = rem;
	for (i = 1; i < 5; i++)
	{
		if ((change == 0) && (rem == 1))
			break;
		no_cents += change / changes[i];/*adds no of coins of the change*/
		rem = change % changes[i];/*remaining amount*/
		change = rem;
	}
	printf("%d\n", no_cents);
	return (0);
}
