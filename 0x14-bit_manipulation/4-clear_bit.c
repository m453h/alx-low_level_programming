#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the unsigned int to set bit to 0
 * @index: index of the bit of @n to set to 0
 *
 * Return: (1) if bit was set else (-1) if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	 *n = *n & (~(1 << index));

	return (1);
}
