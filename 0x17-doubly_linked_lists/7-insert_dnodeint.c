#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of list
 * @idx: position to insert node.
 * @n: data to enter to newnode
 *
 * Return: address of newnode
 * or null if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp, *nextnode;
	unsigned int currentindex = 0;

	if (idx == 0) /* insert at the beginning of list */
	{
		newnode = add_dnodeint(h, n); /* call function */
		return (newnode);
	}

	temp = *h;
	while (temp != NULL && currentindex < idx - 1) /* traverse list */
	{
		temp = temp->next; /* move to next node */
		currentindex++; /* increament currentindex */
	}
	/* check if index is out of bound */
	if (temp == NULL && currentindex < idx - 1)
	{
		return (NULL);
	}

	if (temp->next == NULL) /* check if its end of list */
	{
		newnode = add_dnodeint_end(h, n); /* call function */
	}
	else /* if its not 1st or last position then */
	{
		/* allocate memory to newnode */
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (newnode != NULL) /* add at index if malloc did not fail */
		{
			newnode->n = n; /* add data to newnode */
			nextnode = temp->next; /*store address of nextnode */
			newnode->prev = temp; /* point newnode prev to current node */
			temp->next = newnode; /* point current nodenext to newnode */
			newnode->next = nextnode; /* point newnodenext to nextnode */
			nextnode->prev = newnode; /* point nextnode prev to newnode */
		}
	}
	return (newnode);
}
