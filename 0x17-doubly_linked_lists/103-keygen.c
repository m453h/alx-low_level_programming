#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define chars "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"

/**
 * verify_argc - verifies if the right number of arguments are passed.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: (int) 1 if success, -1 on failure.
 */
int verify_argc(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <input>\n", argv[0]);
		return (-1);
	}

	return (1);
}

/**
 * main - generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: (int) Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i = 0, sum = 0, prod = 1, sq_sum = 0, input_length, index, max_char;
	char *password_chars = chars, password[7];

	verify_argc(argc, argv);
	input_length = strlen(argv[1]);
	index = (input_length ^ 59) & 63;
	password[0] = password_chars[index];

	for (i = 0; i < input_length; i++)
		sum += argv[1][i];
	index = (sum ^ 79) & 63;
	password[1] = password_chars[index];

	for (i = 0; i < input_length; i++)
		prod *= argv[1][i];
	index = (prod ^ 85) & 63;
	password[2] = password_chars[index];

	max_char = 0;
	for (i = 0; i < input_length; i++)
	{
		if (argv[1][i] > max_char)
			max_char = argv[1][i];
	}
	srand(max_char ^ 14);
	index = rand() & 63;
	password[3] = password_chars[index];

	for (i = 0; i < input_length; i++)
		sq_sum += argv[1][i] * argv[1][i];
	index = (sq_sum ^ 239) & 63;
	password[4] = password_chars[index];

	for (i = 0; i < argv[1][0]; i++)
		index = rand();
	index = (index ^ 229) & 63;
	password[5] = password_chars[index];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}





