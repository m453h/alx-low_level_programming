#include "search_algos.h"
#include "math.h"

/**
 * jump_search - searches for an element in an array using jump search
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */

int jump_search(int *array, size_t size, int value)
{

	size_t prev_jump = 0, jump = 0, step = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev_jump = jump;
		jump = jump + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev_jump, jump);

	if (prev_jump < jump && array[prev_jump] == value)
	{
		return (prev_jump);
	}

	return (-1);
}
