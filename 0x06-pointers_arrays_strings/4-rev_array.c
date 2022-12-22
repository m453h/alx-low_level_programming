#include "main.h"

/**
 * reverse_array - reverses an input array of integers
 * @a: the input array
 * @n: the number of elements in an array
 *
 *  Return: (char *) - concatenated string
 */
void reverse_array(int *a, int n)
{
	int temp, i, j = 0;

	for (i = n - 1; i > 0 && i > j; i--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j++;
	}
}
