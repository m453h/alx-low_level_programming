#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char.
 * @s: The pointer to set
 * @to: The value the pointer will be set
 *
 *  Return: (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
