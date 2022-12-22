#include "main.h"

/**
 * string_toupper - changes lowercase letters in a string to uppercase
 * @s: the input string
 *
 * Return: (char) the string in upper case
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
