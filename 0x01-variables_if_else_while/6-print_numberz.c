#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 followed by new line
*
* Description: using the main function this program
* prints all single digit numbers of base 10 followed by a new line
*
* Return: 0
*/
int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}

	putchar('\n');

	return (0);
}
