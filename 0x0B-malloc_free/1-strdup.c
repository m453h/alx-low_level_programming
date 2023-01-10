#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the original array to copy from
 *
 * Return: (char *) - pointer to new array which is a copy of @str
 */
char *_strdup(char *str)
{

	char *str_copy;
	unsigned int length = 0, i = 0;

	if (str == 0)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	length = i + 1;

	str_copy = malloc(sizeof(char) * length);

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < length - 1; i++)
	{
		str_copy[i] = str[i];
	}

	str_copy[i] = '\0';

	return (str_copy);
}
