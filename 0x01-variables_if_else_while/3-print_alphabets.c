#include <stdio.h>

/**
* main - prints alphabet in lowercase, uppercase followed by a new line
*
* Description: using the main function this program
* prints the alphabet in lowecase, and uppercase followed by a new line
*
* Return: 0
*/
int main(void)
{
	char lowercase_letter;
	char uppercase_letter;

	lowercase_letter = 'a';
	uppercase_letter = 'A';

	while (lowercase_letter <= 'z')
	{
		putchar(lowercase_letter);
		lowercase_letter++;
	}

	while (uppercase_letter <= 'Z')
	{
		putchar(uppercase_letter);
		uppercase_letter++;
	}

	putchar('\n');

	return (0);
}
