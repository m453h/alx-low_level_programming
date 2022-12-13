#include "main.h"

/**
 * _isalpha - Check if character is a letter, lowercase or uppercase
 * @c: The input character to be checked
 *
 * Return: 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
