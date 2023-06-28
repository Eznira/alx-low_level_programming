#include "main.h"
/**
 * print_rev - Prints the characters in the even indexes of a string
 * @str: Pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;

	while (i < len - 1)
	{
		_putchar(str[i]);
		i+=2;
	}

	_putchar('\n');
}
