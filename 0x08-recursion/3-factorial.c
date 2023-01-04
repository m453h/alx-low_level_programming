#include "main.h"

/**
 * factorial - calculates factorial
 * @n: the number to calculate its factorial
 *
 *  Return: (int) - factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
