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
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *search = needle;

		while (*search == *haystack && *search != '\0' && *haystack != '\0')
		{
			haystack++;
			search++;
		}

		if (*search == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}
	return ('\0');
}
