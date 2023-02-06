#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main -  copies the content of a file to another file
*
* @argc: number of arguments passed to the function
* @argv: array containing the passed arguments
* Return: (int) 0 - on success,
* 97 - if the number of argument is not the correct one
* 98 - if  file_from does not exist, or can not be read
* 99 - if can not create or if write to file_to fails
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;
	int n_bytes = 1024, n_bytes_wr = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}

	while (n_bytes == 1024)
	{
		n_bytes = read(file_from, buffer, 1024);
		if (n_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n_bytes_wr = write(file_to, buffer, n_bytes);
		if (n_bytes_wr < n_bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
