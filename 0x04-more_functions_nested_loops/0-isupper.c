#include "main.h"

/**
 * _isupper - check if the character is upper or lower case
 *@c: The input character to be checked if upper or lower case
 *
 *  Return: 1, if is uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
