#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t list.
 * @head: Points to the head node of the list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
