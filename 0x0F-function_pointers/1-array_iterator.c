#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on,
 * each array element.
 *
 * @array: the array to execute a function on
 * @size: size of the array
 * @action: the function to be executed on each array member
 *
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
