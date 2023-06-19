#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 *              in ascending order, separated by ", "
 *
 * Return: (0) Always 0 (Success)
 */
int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');

			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
