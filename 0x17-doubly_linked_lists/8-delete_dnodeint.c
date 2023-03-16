#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node from a dlistint_t
 *                            at given index
 * @head: pointer to the head of the dlistint_t
 * @index: the index of the node to delete
 *
 * Return: (int) 1 - On Success ELSE, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *iterator = *head;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (iterator == NULL)
			return (-1);
		iterator = iterator->next;
	}

	if (iterator == *head)
		*head = (*head)->next;
	else
		iterator->prev->next = iterator->next;

	if (iterator->next != NULL)
		iterator->next->prev = iterator->prev;

	free(iterator);
	return (1);
}

