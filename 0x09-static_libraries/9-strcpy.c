/**
 * _strncpy - Copy a string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
