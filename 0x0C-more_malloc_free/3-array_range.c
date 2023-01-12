#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers within a range
 * @min: The first element of the array
 * @max: The last element of the array
 *
 *  Return: (NULL) if @min > @max,
 *  pointer to created array
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}

	return (array);
}
