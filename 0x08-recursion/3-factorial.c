/**
 * factorial - Returns the factorial of a number.
 * @n: The number.
 *
 * Return: The factorial of the number.
 *         -1 if n is negative (error).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
