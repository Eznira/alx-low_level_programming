#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments (should be 2).
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	char *ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *ptr);
		if (i != bytes - 1)
			printf(" ");
		ptr++;
	}

	printf("\n");
	return (0);
}
