#include <stdio.h>
/**
 * main - Prints the arguments passed to the main on the terminal.
 *
 * @argc: The number of command line arguements.
 * @argv: The array of strings containing the command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
