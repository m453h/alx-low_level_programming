#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - determines the nth node of a listint_t linked list.
 *
 * @head: the listint_t head.
 * @index: the index of the node (starts at 0)
 *
 * Return: the nth node at @index else NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t counter = 0;

	while (head != NULL)
	{
		counter++;

		if (counter == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
