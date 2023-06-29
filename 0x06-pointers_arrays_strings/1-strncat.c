#include <stdio.h>

/**
 * _strncat - Concatenates two strings, up to index n of the second string
 * @dest: The first string.
 * @src: The second string.
 * @n: The index of the second string.
 *
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;
	int i;
	int len;

	result = dest;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}



	i = 0;

	while (i < n && src[i] != '\0')
	{
		result[len] = src[i];

		len++;
		i++;
	}

	return (result);
}
