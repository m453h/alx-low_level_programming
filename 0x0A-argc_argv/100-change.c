#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the number of coins that should be returned as change
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 *  Return: (0) if the calculation was done succesfuly (1) if calculation
 *  was not done due to user supplying incorrect arguments
 */
int main(int argc, char *argv[])
{
	int i, amount, counter = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	amount = atoi(argv[1]);

	while (amount > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (amount - coins[i] >= 0)
			{
				amount = amount - coins[i];
				counter++;
				break;
			}
		}
	}

	printf("%d\n", counter);

	return (0);
}
