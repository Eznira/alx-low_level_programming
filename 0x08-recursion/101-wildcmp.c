/**
 * wildcmp - Compares two strings and returns 1 if they are identical.
 * @s1: The first string.
 * @s2: The second string (can contain the special character '*').
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0') /* If '*' is the last character */
			return (1);
		else if (*s1 == '\0') /* If s1 is empty, s2 stil has char*/
			return (0);
		else if (wildcmp(s1 + 1, s2) == 1)
/* Match '*' with s1's character */
			return (1);
		else
			return (wildcmp(s1, s2 + 1));
/* Ignore '*' and move to next character */
	}

	if (*s1 != *s2)
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
