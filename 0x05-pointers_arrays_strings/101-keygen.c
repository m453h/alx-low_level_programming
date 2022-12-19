#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints password for 101-crackme object file
 *
 * Description: using the main function this program
 * prints a random password for the 101-crackme file
 * this password has a checksum of 2772 that is computed by
 * summing the ASCII code value of each character in the password
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char password[50];
	int index, checksum, is_password_generated = 0;

	srand(time(0));

	while (is_password_generated != 1)
	{
		index = 0, checksum = 0;

		while (checksum  < 2772)
		{
			password[index] = alphabet[rand() % (sizeof(alphabet) - 1)];
			checksum = checksum + password[index] - 0;
			index++;
		}

		password[index] = '\0';

		if (checksum == 2772)
			is_password_generated = 1;

	}

	printf("%s", password);

	return (0);
}
