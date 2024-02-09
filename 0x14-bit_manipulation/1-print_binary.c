#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int began = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) || began)
		{
			_putchar((n & mask) ? '1' : '0');
			began = 1;
		}
		mask >>= 1;
	}
}
