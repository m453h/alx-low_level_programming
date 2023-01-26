#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a pointer to the head of the list_t list
 * @str: the string to be added to the list_t list
 *
 * Return: address of the new element, or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int length;
	list_t *new_node, *iterator;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_node->str = str_dup;
	new_node->len = length;
	new_node->next = NULL;

	if (*head != NULL)
	{
		iterator = *head;
		while (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		iterator->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
