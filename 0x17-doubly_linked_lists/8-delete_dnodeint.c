#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: head of list
 * @index: position to delete
 *
 * Return: 1 for success
 * or -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nextnode, *prevnode, *currentnode = *head;
	size_t currentidx = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		nextnode = currentnode->next;
		free(*head);
		*head = nextnode;
		if (nextnode != NULL)
			nextnode->prev = NULL;
		return (1);
	}
	/* traverse list */
	while (currentnode != NULL && currentidx < index)
	{
		currentnode = currentnode->next;
		currentidx++;
	}
	if (currentnode == NULL)
		return (-1);
	prevnode = currentnode->prev;
	nextnode = currentnode->next;

	if (nextnode != NULL)
		nextnode->prev = prevnode;
	if (prevnode != NULL)
		prevnode->next = nextnode;
	free(currentnode);

	return (1);

}
