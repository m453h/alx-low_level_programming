#include <stdio.h>

/**
* main - displays first 50 fibonacci numbers
*
* Description: using the main function
* this program displays the first 50 fibonacci numbers
*
* Return: Always 0
*/

int main(void)
{
	long first_term = 0, second_term = 1, next_term = 0, sum = 0;

	while (next_term <= 4000000)
	{
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;

		if (next_term % 2 == 0)
			sum = sum + next_term;

	}

	printf("%ld", sum);
	printf("\n");

	return (0);
}
