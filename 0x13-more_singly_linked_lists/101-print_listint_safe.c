#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;
	const listint_t *temp;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (node_count);
}
