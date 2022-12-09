#include <stdio.h>

/**
* main - prints alphabet in lowercase followed by new line
*
* Description: using the main function this program
* prints the alphabet in lowecase, followed by a new line
*
* Return: 0
*/
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
