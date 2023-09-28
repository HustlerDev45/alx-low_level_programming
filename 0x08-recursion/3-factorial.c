#include "main.h"
/**
 * factorial - Returns the factorial of a number.
 *
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
