#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string */
	while (s[i] != '\0')
		i++;

	/* Print the string in reverse */
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
