#include "main.h"
/**
 * _puts_recursion - Prints a string.
 *
 * @s: The string to be printed.
 *
 * Return: No return since the function is void.
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        putchar('\n');
    }
}
