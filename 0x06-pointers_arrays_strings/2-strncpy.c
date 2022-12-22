#include "main.h"

/**
 * _strncpy - copies first n characters from src to dest
 * @dest: the first string to be copied
 * @src: the second string to be appended
 * @n: the number of characters to be extracted and copied
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

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
