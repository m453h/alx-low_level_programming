#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: pointer to the name of the file read
 * @letters:  the number of letters to read and print
 *
 * Return: (ssize_t)the actual number of letters it could read and print,
 * ELSE (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	r = read(file, txt, letters);

	w = write(STDOUT_FILENO, txt, r);

	close(file);

	return (w);
}
