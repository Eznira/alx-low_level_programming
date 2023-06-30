#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	bool capitalize_next = true;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = true;
		}
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			capitalize_next = false;
		}
		else
		{
			capitalize_next = false;
		}

		i++;
	}

	return (str);
}
