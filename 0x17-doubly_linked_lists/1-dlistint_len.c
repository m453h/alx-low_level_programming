#include "lists.h"
#include <stdio.h>

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
