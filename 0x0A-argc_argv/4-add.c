#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculates length of a string
 * @str: the pointer to the first character of the string
 *
 *  Return: (int) - length of the string
 */
int _strlen(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	return counter;
}

/**
 * is_proper_int - converts the results of integer to string conversion
 * done by atoi function to check if the converted integer has the same
 * length as the original string
 *
 * @n: the integer converted by atoi function
 * @number: the original string that was converted by atoi function
 *
 *  Return: (0) if @n matches with @number or (1) if they don't match
 */
int is_proper_int(int n, char *number)
{
	int i;
	char str[10];

	sprintf(str,"%d",n);

	if (_strlen(str) == _strlen(number))
	{
		for (i = 0; i < _strlen(number); i++)
		{
			if (number[i] != str[i])
			{
				return (1);
			}

		}
	}
	else
	{
		return (1);
	}

	return (0);
}

/**
 * main - adds arguments passed by a user and displays the results
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 *  Return: (0) if summation was done succesfully or (1) if summation
 *  was not done due to user supplying non integer arguments
 */
int main(int argc, char **argv)
{
	int sum = 0, i, number;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			number = atoi(argv[i]);

			if (is_proper_int(number, argv[i]) == 0)
			{
				sum = sum + number;
			}
			else
			{
				printf("%s", "Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);

	return (0);

}
