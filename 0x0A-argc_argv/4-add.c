#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds the arguments entered in the terminal and displays
 *        the result.
 *
 * @argc: The variable holding the number of arguments.
 * @argv: The array holding the arguements.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0");
		printf("\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("ERROR\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
