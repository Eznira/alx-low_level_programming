#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * @str: pointer to the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
