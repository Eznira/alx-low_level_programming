#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Description: This function checks whether the given character is lowercase.
 *              It returns 1 if the character is lowercase, and 0 otherwise.
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
