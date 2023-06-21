#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms in the Fibonacci
 *              sequence up to a given limit.
 *
 * Return: Always 0
 */
int main(void)
{
	int term1 = 1, term2 = 2, nextTerm;
	long sum = 2;

	while (term2 <= 4000000)
	{
		nextTerm = term1 + term2;

		if (nextTerm % 2 == 0)
		{
			sum += nextTerm;
		}

		term1 = term2;
		term2 = nextTerm;
	}

	printf("%ld\n", sum);

	return (0);
}
