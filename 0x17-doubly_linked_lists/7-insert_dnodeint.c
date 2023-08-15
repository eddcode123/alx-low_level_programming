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
	/* declare varibles to use */
	dlistint_t *newnode;
	dlistint_t *temp, *prev;
	size_t i = 0;

	/* allocate memory to newnode */
	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	/* check for malloc error */
	if (newnode == NULL)
		return (NULL);
	/* add data to newmode */
	newnode->n = n;

	/* point temp where head is pointing */
	temp = *h;

	/* check if index is 0 */
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
	}
	else
	{
		/* travese list */
		while (temp != NULL && i < idx - 1)
		{
			/* move to next node */
			temp = temp->next;
		}
		/*check if index is out of bound */
		if (temp == NULL && i < idx)
			return (NULL);
		/* point node to the respective node */
		newnode->next = temp->next;
		newnode->prev = temp;
		prev = temp->next;
		temp->next = newnode;
		prev->prev = newnode;
	}

	return (*h);

}
