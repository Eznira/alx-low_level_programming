#include "main.h"

/**
 * print_alphabet - Program begins from here!
 *
 * description: Prints the lowercase alphabets
 *
 * Return: void
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
