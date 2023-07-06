/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number.
 *
 * Return: The natural square root of n.
 *         -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function for calculating the square root.
 * @n: The number.
 * @i: The current value to check.
 *
 * Return: The natural square root of n.
 *         -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return i;

	if (i * i > n)
		return -1;

	return sqrt_helper(n, i + 1);
}
