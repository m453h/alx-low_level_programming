#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the listint_t head.
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt_node, *prev_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev_node = NULL;

	while ((*head)->next != NULL)
	{
		nxt_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = nxt_node;
	}

	(*head)->next = prev_node;

	return (*head);
}
