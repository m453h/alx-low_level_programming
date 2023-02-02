#include "main.h"

/**
 * flip_bits - determines the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = n ^ m, n_bits = 0;

	while (x >= 1)
	{
		if ((x & 1) == 1)
			n_bits++;

		x = x >> 1;
	}

	return (n_bits);
}
