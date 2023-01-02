#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to check for occurence of substring
 * @accept: the string to check if occurs in @s
 *
 *  Return: number of bytes in initial segment of @s which
 *  consists only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}

			else if (accept[j + 1] == '\0')
				return (k);
		}

		i++;
	}

	return (k);
}
