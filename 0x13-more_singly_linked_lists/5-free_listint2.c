#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list from memory,
 * sets the head to null
 * @head: the listint_t list to free.
 *
 * Return: (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *iterator;

	while (*head != NULL)
	{
		iterator = (*head)->next;
		free(*head);
		*head = iterator;
	}

	head = NULL;
}
