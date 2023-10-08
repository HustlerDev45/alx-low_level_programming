#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate n bytes of a string to another.
 * @s1: First string.
 * @s2: Second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	cat = malloc(sizeof(char) * (len1 + n + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cat[j++] = s1[i];

	for (i = 0; i < n; i++)
		cat[j++] = s2[i];

	cat[j] = '\0';

	return (cat);
}
