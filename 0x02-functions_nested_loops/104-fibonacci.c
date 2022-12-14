#include "stdio.h"

/**
* main - prints the first 98 Fibonacci numbers.
*
* Description: using the main function
* this program prints the first 98 fibonacci numbers
*
* Return: Always 0
*/

int main(void)
{
	unsigned long term_1 = 0, term_2 = 1, next_term;
	unsigned long term_1_half_1, term_1_half_2, term_2_half_1, term_2_half_2;
	unsigned long half_1_term_sum, half_2_term_sum, divisor = 10000000000;
	int i;

	for (i = 0; i < 92; i++)
	{
		next_term = term_1 + term_2;
		printf("%lu, ", next_term);
		term_1 = term_2;
		term_2 = next_term;
	}

	term_1_half_1 = term_1 / divisor;
	term_1_half_2 = term_1 % divisor;
	term_2_half_1 = term_2 / divisor;
	term_2_half_2 = term_2 % divisor;

	for (i = 93 ; i < 99; i++)
	{
		half_1_term_sum = term_1_half_1 + term_2_half_1;
		half_2_term_sum = term_1_half_2 + term_2_half_2;

		if (term_1_half_2 + term_2_half_2 > (divisor - 1))
		{
			half_1_term_sum = half_1_term_sum + 1;
			half_2_term_sum = half_2_term_sum % divisor;
		}

		printf("%lu%lu", half_1_term_sum, half_2_term_sum);

		if (i < 98)
			printf(", ");

		term_1_half_1 = term_2_half_1;
		term_1_half_2 = term_2_half_2;
		term_2_half_1 = half_1_term_sum;
		term_2_half_2 = half_2_term_sum;
	}

	printf("\n");

	return (0);
}
