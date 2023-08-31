#include "main.h"
/**
 * _puts_rev - Prints out a string in reversed order to the
 *             standard output, recursibely.
 * @a: The pointer to the string.
 */
void _print_rev_recursion(char *a)
{
	if (*a == '\0')
	{
		return;
	}

	_print_rev_recursion(a + 1);
	_putchar(*a);
}
