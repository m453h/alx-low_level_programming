#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the first string to be appended
 * @src: the second string to be appended
 * @n: number of bytes to use from the second string
 *
 *  Return: (char *) - concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
