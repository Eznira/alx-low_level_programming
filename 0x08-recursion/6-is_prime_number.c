/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The input integer.
 *
 * Return: 1 if the input is a prime number, 0 otherwise.
 */
int is_prime_number_helper(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - Helper function to check if a number is prime recursively.
 * @n: The input integer.
 * @divisor: The current divisor to check for primality.
 *
 * Return: 1 if the input is a prime number, 0 otherwise.
 */
int is_prime_number_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_number_helper(n, divisor + 1));
}
