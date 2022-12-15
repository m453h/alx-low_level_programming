#include <stdio.h>
#include <math.h>

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
	long int number, i, max_prime_factor;

	number = 612852475143;

	while (number % 2 == 0)
	{
		max_prime_factor = 2;
		number = number / 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			max_prime_factor = i;
			number = number / i;
		}

	}

	if (number > 2)
	{
		max_prime_factor = number;
	}

	printf("%ld", max_prime_factor);
	printf("\n");

	return (0);
}
