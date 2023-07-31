#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a list_t single linkedlist.
 * @h: holds the address of the head node of the single linkedlist.
 *
 * Return: The number of nodes in the linkedlist.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
