#include "main.h"

/**
 * _strcpy - copies the string pointed to another buffer
 *
 * @src: The origin buffer to be copied
 * @dest: The destination buffer
 *
 * Description: this function copies the string pointed
 * by src, including the termination null byte \0, to
 * the buffer pointed to by dest
 *
 * Return: (char *dest) pointer to copy destination
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	return (dest);
}
