#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function iterates through the linked list and frees
 *              the memory allocated for each node and its `str` member.
 *              It sets the head to NULL after freeing all the nodes.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

	head = NULL;
}
