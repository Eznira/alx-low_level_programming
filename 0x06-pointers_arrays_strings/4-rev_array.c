/**
 * reverse_array - Reverses the elements of an array
 * @a: The integer array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int mid_index;
	int n_element;
	int i;
	int temp;

	mid_index = n / 2;

	for (i = 0; i < mid_index; i++)
	{
		n_element = n - i - 1;

		temp = *(a + n_element);
		*(a + n_element) = *(a + i);
		*(a + i) = temp;
	}
}
