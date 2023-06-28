#include "main.h"
/**
 * puts_half - Prints all the end characters starting from mid index
 * @str: Pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	n = (len - 1) / 2;
	int mid_index = (len - 1) - n;

	while (mid_index <= len - 1)
	{
		_putchar(str[mid_index]);
		mid_index++;
	}

	_putchar('\n');
}
