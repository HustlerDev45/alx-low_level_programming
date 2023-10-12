#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a function on each element of an int array.
 * @array: The integer array.
 * @size: Size of the array
 * @action: A pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
