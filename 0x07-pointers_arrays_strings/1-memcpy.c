#include "main.h"

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
