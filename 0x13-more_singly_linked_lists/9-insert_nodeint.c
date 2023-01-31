#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the listint_t head.
 * @idx: the index of the list where the node should be added (starts at 0)
 * @n: the data (n) of the new node to insert in the list
 *
 * Return: address of the new node, else NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t counter = 0;
	listint_t *new_node, *iterator;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	iterator = *head;


	while (iterator != NULL)
	{

		if (counter == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			
			new_node->next = iterator->next;
			iterator->next = new_node;

			return (new_node);
		}

		iterator = iterator->next;
		counter++;

	}

	return (NULL);
}
