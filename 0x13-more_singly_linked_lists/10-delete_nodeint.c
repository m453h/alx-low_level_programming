#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node of listint_t linked list at an index.
 *
 * @head: the listint_t head.
 * @index: the index of the node that should be deleted
 *
 * Return: (int) 1 if succeeded else return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp_node, *iterator;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	iterator = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(iterator);
		return (1);
	}

	if (index == 1)
	{
		iterator = (*head)->next;
		(*head)->next = iterator->next;
		free(iterator);
		return (1);
	}

	while (counter < (index - 1))
	{
		if (iterator->next == NULL)
			return (-1);

		iterator = iterator->next;
		temp_node = iterator->next;
		counter++;	
	}
	
	iterator->next = temp_node->next;
	free(temp_node);
	return (1);
}
