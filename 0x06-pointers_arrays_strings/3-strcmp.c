#include "main.h"

/**
 * _strcmp - compares two strings character by character
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 *  Return: (int) the difference between s1 and s2 ASCII codes
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		difference = s1[i] - s2[i];

		if (difference != 0)
			break;
		i++;
	}

	return (difference);
}
