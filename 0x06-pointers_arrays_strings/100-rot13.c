#include "main.h"

/**
 * rot13 - Applies the ROT13 substitution cipher to a string.
 * @str: The string to apply ROT13 to.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i, j;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_alphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13_alphabet[j];
				break;
			}
		}
	}

	return (str);
}
