#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the array to fill with bytes
 * @b: the byte to fill in our array
 * @n: the length of the array to be filled
 *
 *  Return: (char *) - filled string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
