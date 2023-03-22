#include "3-calc.h"

/**
 * get_op_func - should return the operation chosed by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the function that correspondes to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; (ops[i].op != NULL && *(ops[i].op) != *s); i++)
		;
	return (ops[i].f);
}

