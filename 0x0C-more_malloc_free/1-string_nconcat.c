#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated memory with the concatenated string.
 *         If allocation fails or if both strings are NULL, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, i, j;
	char *concatenated_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	concatenated_str = malloc(sizeof(char) * (len_s1 + n + 1));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concatenated_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated_str[i + j] = s2[j];

	concatenated_str[i + j] = '\0';

	return (concatenated_str);
}
