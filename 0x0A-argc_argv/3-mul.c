#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply and display the result of two numbers.
 *
 * @argc: The number of command line arguements.
 * @argv: The array of integers containing the numbers as arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d", result);
		printf("\n");

		return (0);
	}
	printf("ERROR");
	printf("\n");

	return (1);
}
