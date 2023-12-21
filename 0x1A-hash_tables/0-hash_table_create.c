#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: Pointer to the new hash table, otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *H_table;
	unsigned long int i;

	H_table = malloc(sizeof(hash_table_t));
	if (H_table == NULL)
		return (NULL);

	H_table->size = size;
	H_table->array = malloc(sizeof(hash_node_t *) * size);

	if (H_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		H_table->array[i] = NULL;

	return (H_table);
}
