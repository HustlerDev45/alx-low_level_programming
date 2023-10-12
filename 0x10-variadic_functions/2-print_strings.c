#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be printed.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *spr;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (spr == NULL)
			printf("(nil)");
		else
			printf("%s", spr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
