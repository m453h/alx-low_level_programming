#include "lists.h"

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

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: the listint_t head.
 *
 * Return: (size_t) - the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter, index = 0;

	counter = looped_listint_len(head);

	if (counter == 0)
	{
		for (; head != NULL; counter++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < counter; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (counter);
}
