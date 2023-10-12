#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nox;
	unsigned int i;

	va_start(nox, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nox, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nox);
}
