#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x", b[j] & 0xff);
			else
				printf("  ");

			if (j + 1 < size)
				printf("%02x ", b[j + 1] & 0xff);
			else
				printf("   ");
		}

		printf(" ");

		for (k = i; k < i + 10; k++)
		{
			if (k < size)
			{
				if (b[k] >= 32 && b[k] <= 126)
					printf("%c", b[k]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
