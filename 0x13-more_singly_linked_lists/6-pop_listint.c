#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Points to a pointer to the head node of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}

	return (data);
}
