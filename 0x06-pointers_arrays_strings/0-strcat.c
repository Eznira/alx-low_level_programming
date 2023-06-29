#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @first: The first string.
 * @second: The second string.
 *
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *first, char *second)
{
	char *result;

	result = first;

	int len = 0;

	while (first[len] != '\0')
	{
		len++;
	}

	int i = 0;

	while (second[i] != '\0')
	{
		result[len] = second[i];

		len++;
		i++;
	}

	return (result);
}
