#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts the number of elements in a linked list
 * @h: the list_t list to count number of elements from.
 *
 * Return: number of elements in @h.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
