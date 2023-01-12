#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 *@s: The input string used to determine length
 *
 *  Return: (int) length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the contents of the first string
 * @s2: the contents of the second string
 * @n: the first n characters to @s2 to concatenate
 *
 * Return: (char *) - pointer to new string that contains @s1 + @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *new_str;
	unsigned int length_1 = 0, length_2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length_1 = _strlen(s1);
	length_2 = _strlen(s2);

	if (n > length_2)
		n = length_2;

	new_str = malloc(sizeof(char) * (length_1 + n + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < length_1; i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		new_str[i + j] = s2[j];
	}

	new_str[i + j] = '\0';

	return (new_str);
}
