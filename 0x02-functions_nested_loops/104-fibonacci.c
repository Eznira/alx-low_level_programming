#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always (0)
 */
int main(void)
{
	unsigned long int term1 = 1, term2 = 2, nextTerm;
	int count;

	printf("%lu, %lu", term1, term2);

	for (count = 3; count <= 98; count++)
	{
		nextTerm = term1 + term2;
		printf(", %lu", nextTerm);

		term1 = term2;
		term2 = nextTerm;
	}

	printf("\n");

	return (0);
}
