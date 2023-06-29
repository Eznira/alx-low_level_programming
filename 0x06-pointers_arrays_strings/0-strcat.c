#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The first string.
 * @src: The second string.
 *
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
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

	while (src[i] != '\0')
	{
		result[len] = src[i];

		len++;
		i++;
	}

	return (result);
}
