#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key to get index of
 * @size: size of the array of the hash table
 *
 * Return: (unsigned long int) - index at which the key
 * value pair should be stored in the array hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index %= size;

	return (index);
}
