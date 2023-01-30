#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the number of elements in a linked list
 * @h: the listint_t list to count number of elements from.
 *
 * Return: number of elements in @h.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
