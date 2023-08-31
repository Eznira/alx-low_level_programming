#include "main.h"
/**
 * _puts_rev - Prints out a string in reversed order to the
 *             standard output, recursibely.
 * @a: The pointer to the string.
 */
void _puts_rev_recursion(char *a)
{
	if (*a == '\0')
	{
		return;
	}

	print_rev_recursion(a + 1);
	_putchar(*a);
}
