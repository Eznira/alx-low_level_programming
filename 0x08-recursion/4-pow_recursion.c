#include "main.h"
/*
 * _pow_recursion - Calculates the power of a given number.
 * @base: The base number.
 * @pow: The power.
 *
 * Return: The power of a number.
 */
int _pow_recursion(int base, int pow)
{
	if (pow < 0)
		return (-1);
	if (pow == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
