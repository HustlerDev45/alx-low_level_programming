#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *ar;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = min++;
	}

	return (ar);
}
