#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Description: This function extracts and prints the
 *              last digit of the given number @n.
 *              It then returns the value of the last digit.
 *
 * Return: The value of the last digit of @n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

	return (last_digit);
}
