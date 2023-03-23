#include "3-calc.h"

/**
 * main - main function to check my calculator
 * @argc: argument for count
 * @argv: string argument
 * Return: Always 0 if no problem exists
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", op(a, b));
	return (0);
}
