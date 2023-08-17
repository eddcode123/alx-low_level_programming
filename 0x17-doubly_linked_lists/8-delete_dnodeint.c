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
	/* pointer variable to use */
	dlistint_t *nextnode, *prevnode, *currentnode = *head;
	size_t currentidx = 0;

	/* checkif list empty */
	if (*head == NULL)
		return (-1);
	/* check if index is 0 */
	if (index == 0)
	{
		/* set currennode to nextnode */
		nextnode = currentnode->next;
		/* free head */
		free(*head);
		/* pass head address of nextnode */
		*head = nextnode;
		/* check if next node is null */
		if (nextnode != NULL)
			/* point nextnode prev to NULl*/
			nextnode->prev = NULL;
		return (1);
	}
	/* traverse list */
	while (currentnode != NULL && currentidx < index)
	{
		currentnode = currentnode->next;
		currentidx++;
	}
	/* check if index is out of bound */
	if (currentnode == NULL)
		return (-1);
	/* set prevnode to curr-prev */
	prevnode = currentnode->prev;
	/* set nextnode to currentnode-next */
	nextnode = currentnode->next;

	/*check if nextnode is null */
	if (nextnode != NULL)
		/* point nextnode-prev to prevnode */
		nextnode->prev = prevnode;
	/* check if prevnode is null */
	if (prevnode != NULL)
		/* point prevnode-next to nextnode */
		prevnode->next = nextnode;
	free(currentnode);

	return (1);

}
