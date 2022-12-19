#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: The input string to be converted
 *
 *  Return: (int) integer converted
 */
int _atoi(char *s)
{
	int sign = 1, length = 0, integer = 0;

	while (s[length] != '\0')
	{

		if (s[length] == '-')
			sign *= -1;
		else if (s[length] >= '0' && s[length] <= '9')
			integer = (integer * 10) + (s[length] - '0');
		else if (integer > 0)
			break;

		length++;
	}

	integer *= sign;

	return (integer);
}
