#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the dlistint_t list.

 *
 * Return: (int) sum of all data(n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
