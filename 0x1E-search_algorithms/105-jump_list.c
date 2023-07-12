#include "search_algos.h"
#include "math.h"

/**
 * jump_list - searches for an element in a linked list using jump search
 * @list: the pointer to the first element in the linked list
 * @size: the size of the linked list
 * @value: the value to search for
 *
 * Return: (int) the index the element was found ELSE returns -1
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0;
	size_t step_size = sqrt(size);
	listint_t *node = list;
	listint_t *jump = list;

	if (list == NULL || size == 0)
		return (NULL);

	while ((jump->index + 1) < size && jump->n < value)
	{
		node = jump;
		step += step_size;
		if ((jump->index + step_size) < size)
		{
			while (jump->index < step)
				jump = jump->next;
		}
		else
		{
			while (jump->index + 1 < size)
				jump = jump->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		node = node->next;
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	}

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	if (node->n == value)
		return (node);

	return (NULL);
}
