#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht:  the hash table to look into
 * @key: the key to look for
 *
 * Return: (char*) - value associated with @key
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
