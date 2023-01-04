#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power y
 * @x: the base
 * @y: the exponent
 *
 *  Return: (int) - factorial of a number
 */
int _pow_recursion(int x, int y)
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
		return (x * _pow_recursion(x, y - 1));
	}
}
