#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the dlistint_t list to print.
 *
 * Return: number of nodes in h.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);

		h = h->next;
		counter++;
	}

	return (counter);
}
