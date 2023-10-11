#include "main.h"
#include <stdio.h>

/**
 * print_name - Print a name using a custom printing function.
 * @name: The name to be printed.
 * @f: A pointer to the custom printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

/**
 * print_standard - A standard name printing function.
 * @name: The name to be printed.
 */
void print_standard(char *name)
{
	if (name != NULL)
	{
		printf("Name: %s\n", name);
	}
}

/**
 * print_uppercase - An uppercase name printing function.
 * @name: The name to be printed.
 */
void print_uppercase(char *name)
{
	if (name != NULL)
	{
		int i = 0;
		while (name[i])
		{
			putchar(toupper(name[i]));
			i++;
		}
		putchar('\n');
	}
}
