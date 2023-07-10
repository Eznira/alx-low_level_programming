#include <stdio.h>
/**
 * main - Prints the name of a progran.
 *
 * @argc: The number of command line arguements.
 * @argv: The array of strings containing the command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char __attribute__((unused))  **argv)
{
	if (argc > 0)
	{
		printf("%d", argc - 1);
		printf("\n");
		return (0);
	}
	return (1);
}
