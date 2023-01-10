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

	while (str[i] != '\0')
	{
		i++;
	}

	length = i;

	if (length == 0)
		return (NULL);

	str_copy = malloc(sizeof(char) * length);

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		str_copy[i] = str[i];
	}

	return (str_copy);
}
