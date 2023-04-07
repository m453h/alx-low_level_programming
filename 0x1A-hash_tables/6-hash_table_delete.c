#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hashtable
 * @ht:  the hash table to delete
 *
 * Return: (void)
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *node_iterator, *temp_node;

	if (ht == NULL || ht->array == NULL)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		node_iterator = ht->array[i];
		while (node_iterator != NULL)
		{
			temp_node = node_iterator->next;
			free(node_iterator->key);
			free(node_iterator->value);
			free(node_iterator);
			node_iterator = temp_node;
		}
	}

	free(ht->array);
	free(ht);
}
