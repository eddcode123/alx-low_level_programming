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
	dlistint_t *temp, *nextnode;
	size_t currentindex = 0;

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
		newnode->prev = NULL;
		newnode->next = *h;
		/*check if list is not empty */
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	/* travese list */
	while (temp != NULL && currentindex < idx - 1)
	{
		/* move to next node */
		temp = temp->next;
		currentindex++;
	}
	/*check if temp is empty */
	if (temp == NULL)
	{
		/* free newnode */
		free(newnode);
		return (NULL);
	}
	/* check if node exist */
	if (temp->next != NULL)
	{
		nextnode = temp->next;
		temp->next->prev = newnode;
	}
	temp->next = newnode;
	newnode->next = nextnode;
	nextnode->prev = newnode;

	return (newnode);
}
