#include "hash_tables.h"

/**
 * hash_table_print - prints a hashtable
 * @ht:  the hash table to print
 *
 * Return: (void)
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	int displayed_pairs = 0;
	hash_node_t *node_iterator;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		node_iterator = ht->array[i];
		
		while (node_iterator != NULL)
		{
			if (displayed_pairs > 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", node_iterator->key, node_iterator->value);
			displayed_pairs++;
			node_iterator = node_iterator->next;
		}
	}

	printf("}\n");
}
