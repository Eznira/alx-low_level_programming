#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Description: This function searches for an integer in the array using the
 *              specified comparison function. It returns the index of d first
 *              element for which the comparison function does not return 0.
 *              If no element matches, it returns -1.
 * Return: Index of the first matching element, or -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
