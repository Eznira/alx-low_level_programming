#include <stdio.h>
/**
 * main - Prints the name of a progran.
 *
 * @argc: The number of command line arguements.
 * @argv: The array of strings containing the command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
		printf("\n");
		return (0);
	}
	return (1);
}
