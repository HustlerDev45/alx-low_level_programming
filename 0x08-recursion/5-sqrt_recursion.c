#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of the number, else -1.
 */
int _sqrt_recursion(int n)
{
	return (calculate_sqrt(n, 0));
}

/**
 * calculate_sqrt - Helper function to calculate the square root.
 *
 * @n: The number whose square root is to be calculated.
 * @i: The current number to check.
 *
 * Return: The natural square root of the number, else -1.
 */
int calculate_sqrt(int n, int i)
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
		return (calculate_sqrt(n, i + 1));
	}
}
