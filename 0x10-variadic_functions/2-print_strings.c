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
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1) // Print the separator unless it's the last string
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(strings);
	printf("\n");
}
