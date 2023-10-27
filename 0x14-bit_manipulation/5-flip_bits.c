#include "main.h"

/**
 * flip_bits - Returns number of bits to flip.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to return.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bit = 0;

	while (xor)
	{
		bit += xor & 1;
		xor >>= 1;
	}

	return (bit);
}
