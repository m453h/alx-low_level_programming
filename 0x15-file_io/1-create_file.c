#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file write
 * @text_content: content to write to the file
 *
 * Return: (int) 1 if success, ELSE -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int write_counter = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[write_counter] != '\0')
	{
		write_counter++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, write_counter);

	return (1);
}

