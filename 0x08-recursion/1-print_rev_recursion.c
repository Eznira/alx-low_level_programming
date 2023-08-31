#include "main.h"
/**
 * _puts_recursion - Prints out a string to the standard output,
 *                   recurcively.
 * @a: The pointer to the string.
 */
void _puts_recursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*a);
	_puts_recursion(a + 1);
}
