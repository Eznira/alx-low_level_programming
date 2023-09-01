#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Description: This function gets d absolute value of d given integer @n.
 *              If @n is +ve or zero, it returns @n. If @n is -ve, it returns
 *              the negation of @n, i.e., its positive counterpart.
 *
 * Return: The absolute value of @n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
