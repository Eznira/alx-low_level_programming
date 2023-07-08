#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The character to be checked
 *
 * Description: This function checks whether the given character is alpabet.
 *              It returns 1 if it  is an alphabet, and 0 otherwise.
 *
 * Return: 1 if @c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
