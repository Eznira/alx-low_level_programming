#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from @n to 98,
 *              separated by a comma and a space.
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}

	printf("%d\n", 98);
}
