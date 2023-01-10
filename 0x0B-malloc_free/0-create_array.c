#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes
 * it with a certain character
 *
 * @c: the array to create
 * @size: the length of the array to be filled
 *
 *  Return: (char *) - pointer to first element of created array
 */
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
