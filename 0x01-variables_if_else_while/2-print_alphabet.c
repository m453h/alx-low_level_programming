#include <stdlib.h>
#include <time.h>
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
	char alphabet;

	alphabet = 'a';

	while (alphabet < 123)
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
