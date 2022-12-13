#include "main.h"

/**
 * _islower - Check if character is in lowercase
 * @c: The input character to be checked
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
