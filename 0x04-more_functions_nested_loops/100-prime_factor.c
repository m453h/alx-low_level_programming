#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @n: The number to check if is prime
 *
 * Return: 1 if number is prime, otherwise 0
 */
int is_prime(long int n)
{
	int i;

	for (i = n - 1; i > 1; i--)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}



/**
 * main - prints largest prime factor of a number
 *
 * description - using the main function this program
 * prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number, i;

	number = 612852475143;
	i = 782848;

	while (i > 1)
	{
		if (number % i == 0 && is_prime(i) == 1)
		{
			printf("%ld", i);
			break;
		}

		i--;
	}

	printf("\n");

	return (0);
}
