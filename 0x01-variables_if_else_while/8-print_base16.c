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
	char alphabet_base_16;

	numeric_base_16 = '0';
	alphabet_base_16 = 'a';

	while (numeric_base_16 < 58)
	{
		putchar(numeric_base_16);
		numeric_base_16++;
	}

	while (alphabet_base_16 < 103)
	{
		putchar(alphabet_base_16);
		alphabet_base_16++;
	}

	putchar('\n');

	return (0);
}
