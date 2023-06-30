/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: Pointer to the converted string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}

	return (str);
}
