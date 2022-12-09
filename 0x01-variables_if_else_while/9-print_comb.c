#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
*
* Description: using the main function this program
* prints all possible combinations of single-digit numbers
*
* Return: 0
*/
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		putchar(number % 10 + '0');
		number++;

		if (number < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
