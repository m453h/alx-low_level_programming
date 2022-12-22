#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the first string to be copied
 * @src: the second string to be appen
 *
 *  Return: (char *) - concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (j < i && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
