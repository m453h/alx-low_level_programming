#include "main.h"

/**
 * print_buffer - prints the content of a buffer
 *
 * @b: the buffer to print
 * @size: the buffer size
 *
 *  Return: (void)
 */
void print_buffer(char *b, int size)
{
	int byte = 0, index;

	while (byte < size)
	{
		printf("%08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");
			else
				printf("%02x", b[index + byte]);

			if ((index % 2) != 0)
				printf(" ");
		}

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;

			else if (b[index + byte] >= 31 && b[index + byte] <= 126)
				printf("%c", b[index + byte]);

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");

		byte = byte + 10;
	}

	if (size == 0)
		printf("\n");
}
