#include <stdio.h>

/**
* main - prints single digit numbers of base 10 followed by new line
*
* Description: using the main function this program
* prints single digit numbers of base 10, followed by a new line
*
* Return: 0
*/
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}

	putchar('\n');

	return (0);
}
