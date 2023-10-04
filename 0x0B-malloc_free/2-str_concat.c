#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the concatenated string, NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	else
		for
			(len1 = 0; s1[len1]; len1++);

	if (s2 == NULL)
		s2 = "";
	else
		for
			(len2 = 0; s2[len2]; len2++);

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
