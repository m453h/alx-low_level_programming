#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: The number of array elements
 * @size: The number of bytes for each element
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
