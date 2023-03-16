#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees dlistint_t from memory
 * @head: a pointer to the dlistint_t to free from memory
 *
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;

	while (head != NULL)
	{
		iterator = head->next;
		free(head);
		head = iterator;
	}

}
