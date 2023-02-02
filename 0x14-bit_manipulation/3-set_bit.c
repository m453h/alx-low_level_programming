/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the unsigned int to set bit to 1
 * @index: index of the bit of @n to set to 1
 *
 * Return: (1) if bit was set else (-1) if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	 *n = (1 << index) | *n;

	return (1);
}
