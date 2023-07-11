#include "search_algos.h"

/**
 * linear_search - searches for an element in an array
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter  = 0;

	if (array == NULL)
		return (-1);

	while (counter < size)
	{
		printf("Value checked array[%ld] = [%d]\n", counter, array[counter]);

		if (array[counter] == value)
		{
			return (counter);
		}

		counter++;
	}

	return (-1);
}
