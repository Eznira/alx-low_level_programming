#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Holds the address of the head node of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
