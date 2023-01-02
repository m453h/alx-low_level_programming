#include "main.h"

/**
 * print_diagsums - prints the sum of the 2 diagonals of
 * a square matrix of integers.
 *
 * @a: the array containing the square matrix
 * @size: the size of the square matrix
 *
 * Return: (void)
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum_1 = sum_1 + a[i];
		}

		if (i < size)
		{
			j = size - 1 + i * (size - 1);
			sum_2 = sum_2 + a[j];
		}

	}

	printf("%d, %d\n", sum_1, sum_2);
}
