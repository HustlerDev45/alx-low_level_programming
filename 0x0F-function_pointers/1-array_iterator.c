#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Execute a function on each element of an integer array.
 * @array: Integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
