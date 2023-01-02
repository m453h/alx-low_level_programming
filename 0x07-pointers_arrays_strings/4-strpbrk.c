#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to check for occurence of a set of bytes
 * @accept: the string containing characters to match @s
 *
 *  Return: (char *) - pointer to the byte in @s that matches
 *  bytes in @accept
 */
char *_strpbrk(char *s, char *accept){
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}

		i++;
	}

	return '\0';
}
