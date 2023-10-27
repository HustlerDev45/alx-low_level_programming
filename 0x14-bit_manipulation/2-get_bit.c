#include "main.h"

/**
 * get_bit - Returns the value of a bit to a given index.
 * @n: Number to be checked.
 * @index: Index of the bit to get.
 *
 * Return: The bit's value to the index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
