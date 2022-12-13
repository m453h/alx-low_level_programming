#include "stdio.h"

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
	long first_term = 0, second_term = 1, next_term;
	int i, limit = 50;

	for (i = 0; i < limit; i++)
	{
		next_term = first_term + second_term;
		printf("%ld", next_term);

		first_term = second_term;
		second_term = next_term;

		if (i < limit - 1)
			printf(", ");

	}

	printf("\n");

	return (0);
}
