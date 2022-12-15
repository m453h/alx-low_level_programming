#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *@c: The input character to be checked if is a digit
 *
 *  Return: 1, if is digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
