#include <stdio.h>

/**
* main - prints a message to standard error
*
* Description: the main function
* this function prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19 to the standard error
* Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
