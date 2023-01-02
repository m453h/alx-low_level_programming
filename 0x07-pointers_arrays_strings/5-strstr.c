#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring in another string
 * @haystack: the string to check for occurence of a set of bytes
 * @needle: the string containing characters to match @s
 *
 *  Return:
 *	if substring is found - pointer to the start of the located substring,
 *	if substring is not found - null byte
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				k = j;
				l = i;

				while (needle[k] == haystack[l] &&
					(needle[k] != '\0' && haystack[j] != '\0'))
				{
					k++;
					l++;
				}

				if (needle[k] == '\0')
				{
					return (&(haystack[i]));
				}

			}
		}
	}

	return ('\0');
}
