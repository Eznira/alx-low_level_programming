#include <stdlib.h>
/**
 * malloc_checked - Allocates the specified amount of memory,
 *                  if malloc fails,function causes normal process
 *                  termination with a status value of 98.
 *
 * @b: The varible specifing the amount of memory to be allocated.
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (!mem)
		exit(98);
	return (mem);
}
