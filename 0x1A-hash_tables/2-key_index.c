#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key.
 * @key: The key to get the index of.
 * @size: Size of the array of the hash table.
 *
 * Return: Index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
