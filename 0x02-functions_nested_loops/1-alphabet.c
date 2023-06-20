#include "main.h"

/**
 * main - Program begins from here!
 *
 * descriptio: Prints the alphabets 10 times
 *
 * Return: 0 (Succes)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
