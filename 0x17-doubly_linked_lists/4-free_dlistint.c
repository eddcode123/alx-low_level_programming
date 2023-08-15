#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: head of list.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	/* declare prev pointer */
	dlistint_t *temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
