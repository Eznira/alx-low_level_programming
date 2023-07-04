#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the main
 *and secondary diagonals of a square matrix.
 * @a: Pointer to the matrix array.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum_main = 0;  /* Sum of the main diagonal elements */
	int sum_secondary = 0;  /* Sum of the secondary diagonal elements */

	/* Calculate the sums */
	for (int i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
/* Elements on the main diagonal */
		sum_secondary += a[i * size + (size - 1 - i)];
/* Elements on the secondary diagonal */
	}

	/* Print the sums */
	printf("Sum of the main diagonal: %d\n", sum_main);
	printf("Sum of the secondary diagonal: %d\n", sum_secondary);
}
