#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Points to the head node of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			return (node);

		node = node->next;
		i++;
	}

	return (NULL);
}
