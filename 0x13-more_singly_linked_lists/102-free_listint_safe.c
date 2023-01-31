#include "lists.h"
#include <stdlib.h>

/**
 * looped_listint_len - counts the number of unique counter
 * in listint_t linked list.
 * @head: the listint_t head.
 *
 * Return: the address of the node where the loop starts else,
 * (NULL) if loop not found
 */
size_t _looped_listint_len(const listint_t *head)
{
	const listint_t *t_node, *h_node;
	size_t counter = 1;

	if (head == NULL || head->next == NULL)
		return (0);

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
				counter++;
			}

			t_node = t_node->next;

			while (t_node != h_node)
			{
				counter++;
				t_node = t_node->next;
			}

			return (counter);
		}

		t_node = t_node->next;
		h_node = (h_node->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: (size_t) The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t counter, index;

	counter = _looped_listint_len(*h);

	if (counter == 0)
	{
		for (; h != NULL && *h != NULL; counter++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < counter; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (counter);
}
