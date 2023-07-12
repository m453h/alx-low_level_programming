#include "search_algos.h"
#include "math.h"

/**
 * advanced_binary_search - searches for a value in a sorted array
 * recursively using binary search algorithm
 *
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: the start index of the array to search
 * @right: the end index of the array to search
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 *
*/
int advanced_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i, middle;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);

		if (i != right)
			printf(", ");
	}
	printf("\n");

	middle = left + (right - left) / 2;
	if (array[middle] == value)
	{
		if ((middle == left || array[middle - 1] != value))
		{
			return (middle);
		}
	}
	if (array[middle] >= value)
	{
		right = middle;
	}
	else
	{
		left = middle + 1;
	}

	return (advanced_binary_search(array, left, right, value));
}

/**
 * advanced_binary - searches for an element in an array
 * using binary search, will always return the first index
 * which the searched element occurs
 *
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_search(array, 0, size - 1, value));
}
