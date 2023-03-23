#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: string argument for function name and no. of bytes
 * Return: Always 0 if no problem exists
 */
int main(int argc, char **argv)
{
	int i, nobytes;
	char *opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nobytes = atoi(argv[1]);
	if (nobytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nobytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if  (i == (nobytes - 1))
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
