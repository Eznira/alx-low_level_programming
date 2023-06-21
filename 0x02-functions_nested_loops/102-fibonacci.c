#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count, n;
	unsigned long fib1 = 1, fib2 = 2, nextTerm;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		nextTerm = fib1 + fib2;
		printf(", %lu", nextTerm);

		fib1 = fib2;
		fib2 = nextTerm;
	}

	printf("\n");

	return (0);
}
