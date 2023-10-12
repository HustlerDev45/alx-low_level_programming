#include "main.h"
#include <stdio.h>

/**
 * print_name - Print a name using a custom printing function.
 * @name: The name to be printed.
 * @f: A pointer to the custom printing function.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
