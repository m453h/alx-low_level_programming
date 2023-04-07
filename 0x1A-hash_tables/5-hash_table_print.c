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

	printf("{");
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (displayed_pairs > 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

			displayed_pairs++;
		}
	}

	printf("}\n");
}
