#include "search_algos.h"
#include "math.h"

/**
 * interpolation_search - searches for an element in an array
 * using interpolation search
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, index;

	while (high <= size)
	{
		index = (low + ((value - array[low]) *
			(high - low)) / (array[high] - array[low]));
		if (index < size)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}
		if (array[index] < value)
		{
			low = index + 1;
		}
		else if (array[index] > value)
		{
			high = index - 1;
		}
		else
		{
			return ((int)(index));
		}
	}
	return (-1);
}
