#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies a memory area.
 * @dest: the destination to fill with copied bytes
 * @src: the source of the bytes to copy
 * @n: the number of bytes to copy
 *
 *  Return: (char *) - the copied byte array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size, in bytes, of the allocated space for @ptr
 * @new_size: The size, in bytes, of the new memory block
 *
 *  Return: (NULL) or pointer to created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	new_ptr = malloc(sizeof(*new_ptr) * new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		new_ptr = _memcpy(new_ptr, ptr, old_size);
	
	free(ptr);

	return (new_ptr);
}
