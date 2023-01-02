#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to check for occurence of character
 * @c: the character to look for in @s
 *
 *  Return:
 *	If c is found - pointer to the first occurence of @c
 *	If c is not found null byte
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return ('\0');
}
