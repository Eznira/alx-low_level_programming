#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful" -
 *              Dora Korpar, 2015-10-19" to the standard error.
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar,
2015-10-19\n";

	write(2, message, 59);

	return (1);
}
