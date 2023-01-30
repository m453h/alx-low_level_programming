#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to the head of the listint_t list
 * @n: the integer to be added to the listint_t list
 *
 * Return: address of the new element, or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *iterator;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		iterator = *head;
		while (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		iterator->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
