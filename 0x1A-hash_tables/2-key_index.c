#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key.
 * @key: The key to get the index of.
 * @size: Size of the array of the hash table.
 *
 * Return: Key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	return (hash_djb2(key) % size);
}
