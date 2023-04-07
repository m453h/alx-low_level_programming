#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table.
 * @ht:  the hash table to add or update the key/value to
 * @key: the key to add to the hashtable (must no be empty)
 * @value: value associated with the key (must be duplicated)
 *
 * Return: (int) - 1 on success ELSE 0
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;

	char *value_dup, *key_dup;
	unsigned long int index;

	if (key == NULL || key[0] == '\0' || value == NULL || ht == NULL)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);

	if (value_dup == NULL || key_dup == NULL)
	{
		free(value_dup);
		free(key_dup);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = value_dup;
			return (1);
		}

		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		free(key_dup);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
