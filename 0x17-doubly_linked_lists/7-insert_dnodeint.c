#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - calculates the length of doubly linked list
 * @h: the pointer to the head of the dlistint_t list to find length
 *
 * Return: (int) number of nodes in doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, len = dlistint_len(*h);
	dlistint_t *new_node, *current;


	if (h == NULL)
		return (NULL);



	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len)
		return (add_dnodeint_end(h, n));

	current = *h;
	for (i = 0; i < idx - 1; i++)
		current = current->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
