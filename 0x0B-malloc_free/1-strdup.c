#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a new string.
 * @str: The char to duplicate.
 * Return: A pointer to the duplicate string, NULL otherwise.
 */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
