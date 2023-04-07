#include "hash_tables.h"

void insert_node(shash_table_t *ht, shash_node_t *new_node, const char *key);

/**
 * shash_table_create - creates a sorted hash table.
 * @size: size of the array
 *
 * Return: Pointer to new shash_table_t on success,
 * ELSE return NULL
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash_table = malloc(sizeof(shash_table_t));

	if (shash_table == NULL)
	{
		return (NULL);
	}

	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);

	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		shash_table->array[i] = NULL;
	}
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}

/**
 * shash_table_set - adds an element to a sorted hash table.
 * @ht:  the sorted hash table to add or update the key/value to
 * @key: the key to add to the sorted hash table (must no be empty)
 * @value: value associated with the key (must be duplicated)
 *
 * Return: (int) - 1 on success ELSE 0
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	char *value_dup, *key_dup;
	unsigned long int index;

	if (key == NULL || key[0] == '\0' || ht == NULL)
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
	current_node = ht->shead;
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = value_dup;
			free(key_dup);
			return (1);
		}

		current_node = current_node->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		free(key_dup);
		return (0);
	}
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	insert_node(ht, new_node, key);

	return (1);
}

/**
 * insert_node - adds an element to a sorted hash table.
 * @ht:  the sorted hash table to add or update the key/value to
 * @new_node: the node to insert into the sorted hash table linked list
 * @key: the key to add to the sorted hash table (must no be empty)
 *
 * Return: (void)
 *
 */
void insert_node(shash_table_t *ht, shash_node_t *new_node, const char *key)
{
	shash_node_t *current_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		current_node = ht->shead;

		while (current_node->snext != NULL &&
			strcmp(current_node->snext->key, key) < 0)
		{
			current_node = current_node->snext;
		}

		new_node->sprev = current_node;
		new_node->snext = current_node->snext;

		if (current_node->snext != NULL)
		{
			current_node->snext->sprev = new_node;
		}
		else
		{
			ht->stail = new_node;
		}

		current_node->snext = new_node;
	}
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht:  the sorted hash table to look into
 * @key: the key to look for
 *
 * Return: (char*) - value associated with @key
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (NULL);

	current_node = ht->shead;

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht:  the sorted hash table to print
 *
 * Return: (void)
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	int displayed_pairs = 0;
	shash_node_t *node_iterator;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	node_iterator = ht->shead;

	while (node_iterator != NULL)
	{
		if (displayed_pairs > 0)
		{
			printf(", ");
		}

		printf("'%s': '%s'", node_iterator->key, node_iterator->value);
		displayed_pairs++;
		node_iterator = node_iterator->snext;
	}


	printf("}\n");
}


/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht:  the sorted hash table to print
 *
 * Return: (void)
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int displayed_pairs = 0;
	shash_node_t *node_iterator;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	node_iterator = ht->stail;

	while (node_iterator != NULL)
	{
		if (displayed_pairs > 0)
		{
			printf(", ");
		}

		printf("'%s': '%s'", node_iterator->key, node_iterator->value);
		displayed_pairs++;
		node_iterator = node_iterator->sprev;
	}


	printf("}\n");
}


/**
 * shash_table_delete - deletes a sorted hashtable
 * @ht:  the sorted hash table to delete
 *
 * Return: (void)
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node_iterator, *temp_node;

	if (ht == NULL || ht->array == NULL)
		return;

	node_iterator = ht->shead;
	while (node_iterator != NULL)
	{
		temp_node = node_iterator->next;
		free(node_iterator->key);
		free(node_iterator->value);
		free(node_iterator);
		node_iterator = temp_node;
	}

	free(ht->array);
	free(ht);
}
