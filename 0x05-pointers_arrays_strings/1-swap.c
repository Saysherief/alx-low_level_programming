#include "main.h"

/**
 * swap_int - swaps the value of two integers using pointers
 * @a: a pointer the int we want to swap
 * @b: a pointer the int we want to swap
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
