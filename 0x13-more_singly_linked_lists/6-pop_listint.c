#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the listint_t head to delete.
 *
 * Return: (int) returns the head node’s data (n), else (0) if node
 * is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *iterator;
	int n;

	if (head == NULL)
		return (0);

	iterator = (*head);
	*head = iterator->next;
	n = iterator->n;

	free(iterator);

	return (n);
}
