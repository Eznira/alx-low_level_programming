#include <stdio.h>

/**
 * print_rev - Prints a string in reverse order followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	while (len - 1 >=  0)
	{
		_putchar(str[len - 1);
		len--;
	}

	_putchar('\n');
}
