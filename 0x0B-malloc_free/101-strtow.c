#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string to split.
 * * Return: pointer to the array of words, NULL if fail.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, m, n = 0, len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		len += (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0');

	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; str[j] && str[j] != ' '; j++)
				;
			words[n] = malloc((j - i + 1) * sizeof(char));
			if (words[n] == NULL)
			{
				for (; n >= 0; n--)
					free(words[n]);
				free(words);
				return (NULL);
			}
			for (k = i, l = 0; k < j; k++, l++)
				words[n][l] = str[k];
			words[n][l] = '\0';
			n++;
		}
	}
	words[n] = NULL;

	return (words);
}
