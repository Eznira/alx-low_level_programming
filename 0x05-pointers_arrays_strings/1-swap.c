#include "main.h"
/**
 *swap_int - Swap the contents of two integer varibles
 *@a: the first pointer variable
 *@b: the second pointer variable
 */
void swap_int(int *a, int *b)
{
	int *temp = b;

	b = a;
	a = temp;
}
