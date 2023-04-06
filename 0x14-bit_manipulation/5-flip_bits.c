#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another number
 * @n: the first number
 * @m: the other number
 * Return: The number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mark_dif = n ^ m;
	unsigned int nflip = 0;

	while (mark_dif)
	{
		nflip += mark_dif & 1;
		mark_dif >>= 1;
	}
	return (nflip);
}
