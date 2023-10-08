#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the previously allocated memory.
 * @new_size: New size for the reallocated memory.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr = (char *)ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)new_ptr)[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}
