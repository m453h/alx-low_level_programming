/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index: index of the bit of @n to determine
 *
 * Return: bit of @n at given index else
 * -1 if and error has occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	n = n >> index;

	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
