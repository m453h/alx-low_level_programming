#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments passed by the user
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 * Return: (0) if two arguments were passed by user or (1) if not
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}

	printf("%s", "Error\n");

	return (1);
}
