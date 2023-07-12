#include "search_algos.h"
#include "math.h"

/**
 * mod_binary_search - searches for an element in an array using binary search
 * @array: the pointer to the first element in the array
 * @left: the start index of the sub array to search
 * @right: the end index of the sub array to search
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */
int mod_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	while (left <= right)
	{
		int middle = left + (right - left) / 2;

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
			return ((int)middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}

	return (-1);
}

/**
 * exponential_search - searches for an element in an array
 * using exponential search
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, start, end;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	start = i / 2;
	end = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	return (mod_binary_search(array, start, end, value));
}
