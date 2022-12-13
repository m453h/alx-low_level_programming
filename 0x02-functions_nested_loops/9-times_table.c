#include "main.h"

/**
 * display_multiplication_result - Displays result of multiplying two numbers
 * @i: first input number to be multiplied
 * @j: second input number
 *
 * Return: (void)
 */
void display_multiplication_result(int i, int j)
{
	int first_digit;
	int last_digit;
	int number;

	number = i * j;
	first_digit = number / 10;
	last_digit = number % 10;

	if (first_digit != 0)
	{
		_putchar(first_digit + '0');
	}
	else
	{	if (j !=0)
		{
			_putchar(' ');
		}
	}

	_putchar(last_digit + '0');
}

/**
 * times_table - prints the 9 multiplication table
 *
 * Return: (void)
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			display_multiplication_result(i, j);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
