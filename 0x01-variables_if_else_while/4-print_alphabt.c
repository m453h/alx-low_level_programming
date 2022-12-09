#include <stdio.h>

/**
* main - prints alphabet in lowercase except 'q' and 'e' followed by a new line
*
* Description: using the main function this program
* prints the alphabet in lowecase, except 'q' and 'e' followed by a new line
*
* Return: 0
*/
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);

		alphabet++;
	}

	putchar('\n');

	return (0);
}
