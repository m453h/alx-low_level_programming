#include "lists.h"
#include <stdlib.h>


/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: the listint_t head.
 *
 * Return: the address of the node where the loop starts else,
 * (NULL) if loop not found
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t_node, *h_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	t_node = head->next;
	h_node = (head->next)->next;

	while (h_node)
	{
		if (t_node == h_node)
		{
			t_node = head;

			while (t_node != h_node)
			{
				t_node = t_node->next;
				h_node = h_node->next;
			}

			return (t_node);
		}

		t_node = t_node->next;
		h_node = (h_node->next)->next;
	}

	return (NULL);
}
