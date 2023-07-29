/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The input integer.
 *
 * Return: 1 if the input is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	/* Check for factors from 2 up to the square root of n */
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
