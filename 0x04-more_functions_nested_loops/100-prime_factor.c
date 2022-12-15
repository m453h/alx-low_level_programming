#include <stdio.h>

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
	long int number, i, j, is_prime;

	number = 612852475143;
	i = 782848;

	while (i > 1)
	{
		if (number % i == 0)
		{
			is_prime = 1;

			for (j = i - 1; j > 1; j--)
			{
				if (i % j == 0)
					is_prime = 0;
			}

			if (is_prime == 1)
			{
				printf("%ld", i);
				break;
			}
		}

		i--;
	}

	printf("\n");

	return (0);
}
