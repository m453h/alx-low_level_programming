#include "search_algos.h"
#include "math.h"

/**
 * linear_skip - searches for an element in a sorted skipped
 * linked list of integers
 * @list: the pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *jump = list;

	if (list == NULL)
		return (NULL);

	while (jump->next != NULL && jump->n < value)
	{
		node = jump;

		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index,
					jump->n);
		}
		else
		{
			while (jump->next != NULL)
			{
				jump = jump->next;
			}
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	if (node->n == value)
		return (node);

	return (NULL);
}
