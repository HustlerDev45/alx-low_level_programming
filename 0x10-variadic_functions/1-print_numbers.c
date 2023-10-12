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
	va_list ;
	unsigned int i;

	va_start(nal, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(nal, int);
		printf("%d", num);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(nal);
	printf("\n");
}
