#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates sum of all the data (n) of a listint_t linked list.
 *
 * @head: the listint_t head.
 *
 * Return: (int) the sum of all the data in listint_t else 0
 * if listint_t is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
