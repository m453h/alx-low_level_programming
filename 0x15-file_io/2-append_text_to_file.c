#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file to append
 * @text_content: content to write to the file
 *
 * Return: (int) 1 if success, ELSE -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int write_counter = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[write_counter] != '\0')
		write_counter++;

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, write_counter);

	return (1);
}
