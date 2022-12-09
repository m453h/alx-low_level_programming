#include <stdio.h>

/**
* main - print all possible different combinations of two two-digits
*
* Description: using the main function
* this program prints all possible different combinations of
* two two digits numbers by following these rules:
* -The numbers should range from 0 to 99
*  The two numbers should be separated by a space
*  All numbers should be printed with two digits. 1 should be printed as 01
*  The combination of numbers must be separated by comma, followed by a space
*  The combinations of numbers should be printed in ascending order
*  00 01 and 01 00 are considered as the same combination of the numbers
*  You can only use the putchar function
*  You can only use putchar eight times maximum in your code
*  You are not allowed to use any variable of type char
*  All your code should be in the main function
*
* Return: 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
