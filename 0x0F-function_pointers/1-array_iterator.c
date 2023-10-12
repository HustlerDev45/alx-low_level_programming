#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a function on each element of an int array.
 * @array: The integer array.
 * @size: Size of the array
 * @action: A pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

/**
 * print_element - A sample action function to print an integer element.
 * @n: The integer to print.
 */
void print_element(int n)
{
    printf("%d\n", n);
}
