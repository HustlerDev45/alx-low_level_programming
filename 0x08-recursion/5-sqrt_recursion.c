#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number whose square root is to be calculated.
 *
 * Return: The resulting square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helper function to calculate the square root.
 *
 * @n: The number whose square root is to be calculated.
 * @i: The current number to check if it's the square root of n.
 *
 * Return: The natural square root of the number.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
