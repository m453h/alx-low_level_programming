#include "search_algos.h"

/**
 * binary_search - searches for an element in an array using binary search
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int middle = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}

	return (-1);
}
