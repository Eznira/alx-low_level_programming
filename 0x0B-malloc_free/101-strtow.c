#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int word_count(char *str)
{
	int count = 0, i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		if (str[i] != ' ')
			len++;
	}
	if (len == 0)
		count = 0;

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count, len, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;
			while (str[k] != ' ' && str[k] != '\0')
			{
				len++;
				k++;
			}

			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			word_len = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				words[j][word_len] = str[i];
				word_len++;
				i++;
			}
			words[j][word_len] = '\0';
			j++;
		}
		else
			i++;
	}

	words[j] = NULL;
	return (words);
}
