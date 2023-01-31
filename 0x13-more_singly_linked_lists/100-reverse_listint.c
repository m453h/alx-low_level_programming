#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the listint_t head.
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *nxt_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	prev_node = *head;
	nxt_node = prev_node->next;
	*head = nxt_node->next;

	prev_node->next = NULL;

	while ((*head)->next != NULL)
	{
		nxt_node->next = prev_node;
		prev_node = nxt_node;
		nxt_node = (*head);
		*head = (*head)->next;
	}

	(*head)->next = nxt_node;
	nxt_node->next = prev_node;
	return (*head);
}
