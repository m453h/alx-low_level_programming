#include "main.h"

/**
 * _binary_strlen - calculates the length of a string
 * containing binary number characters 1,0
 * @s: The input string used to determine length
 *
 *  Return: (int) length of string, else (0) when @b contains
 *  non-binary characters
 */
int _binary_strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] != '0' && s[length] != '1')
			return (-1);

		length++;
	}

	return (length);
}

/**
 * _pow - calculates the value of x raised to the power y
 * @x: the base
 * @y: the exponent
 *
 *  Return: (int) - factorial of a number
 */
int _pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow(x, y - 1));
	}
}

/**
 * binary_to_uint - converts a binary number to
 * unsigned int
 *
 * @b: the pointer to string of 0 and 1 chars
 *
 *  Return: (unsigned int) - converted number of
 *  0 if @b is not a well formed string
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int uint = 0;
	int length;

	if (b == NULL)
		return (0);

	length = _binary_strlen(b);

	if (length == -1)
		return (0);
	while (*b)
	{
		length--;

		uint = uint + (_pow(2, length) * (*b - '0'));
		b++;
	}

	return (uint);
}
