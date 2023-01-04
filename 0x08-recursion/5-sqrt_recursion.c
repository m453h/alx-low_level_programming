#include "main.h"

/**
 * check_for_square_roots - finds roots for a number
 * @n: the number to find its square root
 * @m: the number to use for testing square roots
 *
 *  Return: (int) - square root of a number
 */
int check_for_square_roots(int m, int n)
{
	if (m * m == n)
	{
		return (m);
	}

	if (m * m > n)
	{
		return (-1);
	}

	return (check_for_square_roots(m + 1, n));
}


/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to compute its square root
 *
 *  Return: (int) - square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (check_for_square_roots(1, n));
}
