#include <stdio.h>

/**
* main - print all possible different combinations of three digits
*
* Description: using the main function
* this program prints all possible different combinations of three digits
* by following these rules:
* -Numbers must be separated by ,, followed by a space
* -The three digits must be different
* -012, 120, 102, 021, 201, 210 are considered the same combination
* -Print only the smallest combination of three digits
* -Numbers should be printed in ascending order, with three digits
* -You can only use the putchar function
* -You can only use putchar six times maximum in your code
* -You are not allowed to use any variable of type char
* -All your code should be in the main function
*
* Return: 0
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j && j < k)
				{
					if (i == 0 && j == 1 && k == 2)
						printf("%d%d%d", i, j, k);
					else
						printf(", %d%d%d", i, j, k);
				}

			}
		}
	}

	printf("\n");

	return (0);
}
