#include "main.h"
/**
 * _strlen_recursion - Find the length of a string using recursion.
 * @str: The pointer to the string.
 *
 * Return: The lenght of the string.
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen_recursion(str + 1));
}
