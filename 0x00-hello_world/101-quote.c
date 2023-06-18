#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints "and that piece of art is useful" -
 *      Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
	char message_part1[] = "and that piece of art is useful\" - ";
	char message_part2[] = "Dora Korpar, 2015-10-19\n";
	char message[60];

	strcpy(message, message_part1);
	strcat(message, message_part2);
	write(2, message, strlen(message));

	return (1);
}
