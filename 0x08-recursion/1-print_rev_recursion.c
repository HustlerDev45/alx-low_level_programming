#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: The string to be printed in reverse.
 *
 * Return: No return since the function is void.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
