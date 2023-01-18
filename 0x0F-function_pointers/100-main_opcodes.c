#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of its self
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	int (*m)(int, char **) = main;
	unsigned char hex_byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_of_bytes; i++)
	{
		hex_byte = *(unsigned char *)(m + i);
		printf("%.2x", hex_byte);

		if (i < (number_of_bytes - 1))
			printf(" ");
	}

	printf("\n");

	return (0);
}
