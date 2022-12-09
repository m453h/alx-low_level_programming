#include <stdio.h>

/**
* main - prints all the numbers of base 16 followed by a new line
*
* Description: using the main function this program
* prints all the numbers of base 16 followed by a new line
*
* Return: 0
*/
int main(void)
{
	char numeric_base_16;
	char letter_base_16;

	numeric_base_16 = '0';
	letter_base_16 = 'a';

	while (numeric_base_16 <= '9')
	{
		putchar(numeric_base_16);
		numeric_base_16++;
	}

	while (letter_base_16 < 'g')
	{
		putchar(letter_base_16);
		letter_base_16++;
	}

	putchar('\n');

	return (0);
}
