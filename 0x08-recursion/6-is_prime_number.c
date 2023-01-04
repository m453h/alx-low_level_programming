#include "main.h"

/**
 * check_if_is_prime - recursively checks if a number is prime or not
 * @n: the number to check if is prime or not
 * @m: the divisor used for the prime check process
 *
 *  Return: (0) if the number is not prime or (1) if is prime
 */
int check_if_is_prime(int m, int n)
{
	if (n % m != 0)
	{
		if (m > 2)
		{
			return (check_if_is_prime(m - 1, n));
		}
		else
		{
			return (1);
		}
	}

	return (0);
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to check if is prime or not
 *
 *  Return: (0) if the number is not prime or (1) if is prime
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n == 1)
	{
		return (0);
	}

	return (check_if_is_prime(n - 1, n));
}
