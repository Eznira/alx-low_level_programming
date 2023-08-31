#include "main.h"
/**
 * factorial - calculates the factorial of number using recursion.
 * @num: The number variable.
 *
 *Return: The factorial of the @num.
 */
int factorial(int num)
{
	if (num == 0)
		return (1);

	return (num * factorial(num - 1));
}
