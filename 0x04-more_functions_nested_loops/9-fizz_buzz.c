#include "main.h"

/**
 * main - prints numbers from 1 to 100
 * description - using the main function this program
 * displays numbers from 1 to 100 and displays the word
 * Fizz for multiples of 3 and the word Buzz for multiples
 * of 5 and the word FizzBuzz for numbers that are both
 * multiples of 3 and 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if ( i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
