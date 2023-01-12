#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: The number of array elements
 * @size: The number of bytes for each element
 *
 *  Return: (NULL) if @nmemb = 0 or @size = 0,
 *  pointer to created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memb_array;
	char *memb_array_cpy;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memb_array = malloc(size * nmemb);

	if (memb_array == NULL)
		return (NULL);

	memb_array_cpy = memb_array;

	for (i = 0; i < nmemb; i++)
	{
		memb_array_cpy[i] = 0;
	}

	return (memb_array);
}
