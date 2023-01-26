#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list from memory.
 * @h: the list_t list to free.
 *
 * Return: (void)
 */

void free_list(list_t *head)
{
	list_t *iterator;

	while (head != NULL)
	{
		iterator = head->next;
		free(head->str);
		free(head);
		head = iterator;
	}
}
