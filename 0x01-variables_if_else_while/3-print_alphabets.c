#include <stdlib.h>
#include <time.h>
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
	char lowercase_alphabet;
	char uppercase_alphabet;

	lowercase_alphabet = 'a';
	uppercase_alphabet = 'A';

	while (lowercase_alphabet < 123)
	{
		putchar(lowercase_alphabet);
		lowercase_alphabet++;
	}

	while (uppercase_alphabet < 91)
	{
		putchar(uppercase_alphabet);
		uppercase_alphabet++;
	}

	putchar('\n');

	return (0);
}
