#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the dlistint_t list.
 *
 * Return: nth dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t counter = 0;
	
	while (head != NULL)
	{
		if (counter  == index)
			return(head);
		head = head->next;
		counter++;
	}

	return (NULL);
}
