#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *              in ascending order, separated by ", "
 *
 * Return: (0) Always 0 (Success)
 */
int main(void)
{
	int firstDigit;
	int secondDigit;
	int thirdDigit;

	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				putchar(thirdDigit + '0');

				if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
