#include <main.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The input number.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The input number.
 * @start: The starting value for the search.
 * @end: The ending value for the search.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int find_sqrt(int n, int start, int end)
{
	int mid, result;

	if (start <= end)
	{
		mid = start + (end - start) / 2;
		result = mid * mid;

		if (result == n)
			return (mid);
		else if (result > n)
			return (find_sqrt(n, start, mid - 1));
		else
			return (find_sqrt(n, mid + 1, end));
	}

	return (-1);
}
