#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) language.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char *leet_letters = "AaEeOoTtLl";
	char *leet_numbers = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_numbers[j];
				break;
			}
		}
	}

	return (str);
}
