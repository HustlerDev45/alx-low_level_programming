#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number whose square root is to be calculated.
 *
 * Return: The natural square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt_recursion(n, 0));
}

/**
 * calculate_sqrt_recursion – Helper function to calculate the square root.
 * 
 * @n: The number whose square root is to be calculated.
 * @i: The current number to check.
 *
 * Return: The natural square root of the number.
 */
int calculate_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calculate_sqrt_recursion(n, i + 1));
}
