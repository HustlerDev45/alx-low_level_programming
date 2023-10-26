#include "main.h"
#include <stdlib.h>

/**
 * binaire_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string.
 *
 * Return: The converted number, or 0 if b is NULL.
 */
unsigned int binaire_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}
