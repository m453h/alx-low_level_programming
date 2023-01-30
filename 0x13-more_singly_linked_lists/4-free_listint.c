#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list from memory.
 * @head: the listint_t list to free.
 *
 * Return: (void)
 */

void free_listint(listint_t *head)
{
	listint_t *iterator;

	while (head != NULL)
	{
		iterator = head->next;
		free(head);
		head = iterator;
	}
}
