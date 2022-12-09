#include <stdio.h>

/**
* main - prints alphabet in lowercase in reverse order followed by new line
*
* Description: using the main function this program
* prints the alphabet in lowecase in reverse order, followed by a new line
*
* Return: 0
*/
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
