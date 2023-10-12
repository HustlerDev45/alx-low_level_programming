#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array using a comparison function.
 * @array: The array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: -1 if no matching element is found or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
